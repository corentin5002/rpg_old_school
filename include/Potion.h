#ifndef POTION_H
#define POTION_H

#include "Objet.h"

class Potion : public Objet {
public:
    void utiliser(Personnage* p) override;
};

#endif
