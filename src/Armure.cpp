#include "Armure.h"

void Armure::utiliser(Personnage *p) {
    p->equiperArmure(bonusDefense_);
}
