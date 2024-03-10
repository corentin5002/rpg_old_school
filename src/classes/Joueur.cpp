#include "Joueur.h"
#include "Ennemi.h"
#include "Potion.h"
#include "Arme.h"
#include "Armure.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Joueur::combattre(Personnage *ennemi) {
    // Déterminez aléatoirement qui commence
    if (rand() % 2 == 0) {
        // Le joueur commence
        while (estVivant() && ennemi->estVivant()) {
            attaquer(ennemi);
            if (ennemi->estVivant()) {
                ennemi->attaquer(this);
            }
        }
    } else {
        // L'ennemi commence
        while (estVivant() && ennemi->estVivant()) {
            ennemi->attaquer(this);
            if (estVivant()) {
                attaquer(ennemi);
            }
        }
    }

    if (estVivant()) {
        std::cout << "Vous avez gagné le combat !\n";
    } else {
        std::cout << "Vous avez perdu le combat... C'est la fin de la partie.\n";
    }
}

void Joueur::recevoirAide(Personnage *allie) {
    std::cout << "Un allié vous offre de l'aide !\n";
}

void Joueur::ramasserObjet(Objet *objet) {
    std::cout << "Vous avez trouvé un objet ! Voulez-vous le ramasser ? (o/n)\n";
    char choix;
    std::cin >> choix;
    if (choix == 'o') {
        ajouterObjet(objet);
        std::cout << "L'objet a été ajouté à votre inventaire.\n";
    }
}

void Joueur::rencontrer(Personnage *autre) {
    if (dynamic_cast<Ennemi *>(autre)) {
        combattre(autre);
    } else if (dynamic_cast<Joueur *>(autre)) {
        recevoirAide(autre);
    } else {
        Objet *objet = dynamic_cast<Objet *>(autre);
        if (objet) {
            ramasserObjet(objet);
        }
    }
}

