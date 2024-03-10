#include <iostream>
#include "Joueur.h"
#include "Ennemi.h"

int main() {
    Joueur joueur;
    Ennemi ennemi(80, 2, 3);

    joueur.rencontrer(&ennemi);

    return 0;
}
