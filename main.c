#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Menu.h"
#include "Couleur.h"
#include "Plateau.h"
#include "Tuile.h"
#include "time.h"

int main()
{
    srand(time(NULL));// initialisation de la fonction rand
    affichage_menu();//affichage du menu et debut du jeu

    return 0;
}
