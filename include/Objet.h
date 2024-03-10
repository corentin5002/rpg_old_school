#ifndef OBJET_H
#define OBJET_H

// Déclaration anticipée de la classe Personnage
class Personnage;

class Objet {
public:
    virtual ~Objet() {}
    virtual void utiliser(Personnage* p) = 0;
};

// Inclusion de "Personnage.h" après la déclaration de la classe Objet
#include "Personnage.h"

#endif // OBJET_H
