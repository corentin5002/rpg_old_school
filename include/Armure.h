#ifndef ARMURE_H
#define ARMURE_H

#include "Objet.h"

class Armure : public Objet {
public:
    Armure(int bonusDefense) : bonusDefense_(bonusDefense) {}
    void utiliser(Personnage* p) override;

private:
    int bonusDefense_;
};

#endif // ARMURE_H
