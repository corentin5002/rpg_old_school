#ifndef JOUEUR_H
#define JOUEUR_H

#include "Personnage.h"
#include "Ennemi.h"

class Joueur : public Personnage {
public:
    Joueur() : Personnage(100, 10, 5) {}

    void rencontrer(Personnage* autre);

private:
    void combattre(Personnage* ennemi);
    void recevoirAide(Personnage* allie);
    void ramasserObjet(Objet* objet);
};

#endif
