#include "Personnage.h"
#include <iostream>

void Personnage::attaquer(Personnage *cible) {
    int degats = attaque_ - cible->defense_;
    if (degats > 0) {
        cible->pv_ -= degats;
        if (cible->pv_ < 0) {
            cible->pv_ = 0;
        }
    }
}

void Personnage::soigner(int quantite) {
    pv_ += quantite;
    if (pv_ > 100) {
        pv_ = 100;
    }
}

void Personnage::equiperArme(int bonusAttaque) {
    attaque_ += bonusAttaque;
}

void Personnage::equiperArmure(int bonusDefense) {
    defense_ += bonusDefense;
}

void Personnage::ajouterObjet(Objet *objet) {
    if (inventaire_.size() < 10) {
        inventaire_.push_back(objet);
    }
}

bool Personnage::estVivant() const {
    return pv_ > 0;
}



