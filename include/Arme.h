#ifndef ARME_H
#define ARME_H

#include "Objet.h"

class Arme : public Objet {
public:
    Arme(int bonusAttaque) : bonusAttaque_(bonusAttaque) {}
    void utiliser(Personnage* p) override;

private:
    int bonusAttaque_;
};

#endif // ARME_H
