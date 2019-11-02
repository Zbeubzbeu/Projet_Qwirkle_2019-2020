#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Couleur.h"
#include "Plateau.h"
#include "Tuile.h"
#include "Joueur.h"

struct Joueur
{
    int numero_joueur,score;
    char nom[30];

};

void initialisation_joueurs(struct Joueur nombre_joueur[],int nb);//tableau de structure contenant tous les joueurs et leurs infos
void affichage_menu(); //menu
void menu_joueur(int numero_joueur,struct Tuile mains_joueurs[][6],struct Tuile pioche[108],struct Tuile plateau[13][27]);

#endif // MENU_H_INCLUDED
