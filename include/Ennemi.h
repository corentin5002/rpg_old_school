#ifndef ENNEMI_H
#define ENNEMI_H

#include "Personnage.h"

class Ennemi : public Personnage {
public:
    Ennemi(int pv, int attaque, int defense) : Personnage(pv, attaque, defense) {}
};

#endif
