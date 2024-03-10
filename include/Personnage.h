#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <vector>
#include "Objet.h"

class Personnage {
public:
    Personnage(int pv, int attaque, int defense) : pv_(pv), attaque_(attaque), defense_(defense) {}
    virtual ~Personnage() {}

    void attaquer(Personnage* cible);
    void soigner(int quantite);
    void equiperArme(int bonusAttaque);
    void equiperArmure(int bonusDefense);
    void ajouterObjet(Objet* objet);
    bool estVivant() const;

    // Getter de la classe Personnage

    int getPV() const { return pv_; }
    int getAttaque() const { return attaque_; }
    int getDefense() const { return defense_; }
    const std::vector<Objet*>& getInventaire() const { return inventaire_; }



protected:
    int pv_;
    int attaque_;
    int defense_;
    std::vector<Objet*> inventaire_;
};

#endif