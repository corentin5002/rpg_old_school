#include "Arme.h"

void Arme::utiliser(Personnage *p) {
    p->equiperArme(bonusAttaque_);
}
