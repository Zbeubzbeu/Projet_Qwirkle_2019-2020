#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include <stdlib.h>
#include<stdio.h>
#include "time.h"
#include <windows.h>
#include"Plateau.h"
#include"Menu.h"
#include"Couleur.h"



void initialisation_matrice_jeu(struct Tuile mains_joueurs[][6],int nb,struct Tuile pioche[108]);
void piocher(struct Tuile mains_joueurs[][6],struct Tuile pioche[108],int numero_joueur);
void poser_tuile(int numero_joueur,struct Tuile mains_joueurs[][6],struct Tuile plateau[13][27]);

#endif // JOUEUR_H_INCLUDED
