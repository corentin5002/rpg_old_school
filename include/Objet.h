#ifndef OBJET_H
#define OBJET_H

class Personnage;

class Objet {
public:
    virtual ~Objet() {}
    virtual void utiliser(Personnage* p) = 0;
};

#include "Personnage.h"

#endif
