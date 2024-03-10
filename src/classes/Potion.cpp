#include "Potion.h"

void Potion::utiliser(Personnage *p) {
    p->soigner(50);
}
