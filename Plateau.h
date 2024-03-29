#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Couleur.h"
#include "Tuile.h"
#include "Joueur.h"

void initialisation_main(struct Tuile mains_joueurs[][6],int i,struct Tuile pioche[108]);
void initialisation_pioche(struct Tuile pioche[108]);
void initialisation_plateau(struct Tuile plateau[13][27]);
void affichage_plateau(struct Tuile plateau[13][27]);
void affichage_pioche(struct Tuile pioche[108]);



#endif
