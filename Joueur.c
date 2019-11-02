#include "Joueur.h"
#include "Menu.h"
#include "Plateau.h"

void initialisation_matriceJeu(struct Tuile mains_joueurs[][6],int nb,struct Tuile pioche[108])
{
    int i;

    for(i=0;i<nb;i++)
    {
        initialisation_main(mains_joueurs,i,pioche);

    }

}

void affichage_matriceJeu(struct Tuile mains_joueurs[][6],int nb)
{
    int i,j;
    for(i=0;i<nb;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%c%d ",mains_joueurs[i][j]);
        }
        printf("\n");
    }
}
void piocher(struct Tuile mains_joueurs[][6],struct Tuile pioche[108], int numero_joueur)
{
    int i,carte_pioche;

    for(i=0;i<6;i++)
    {
        if((mains_joueurs[numero_joueur-1][i].forme=='p')&&(mains_joueurs[numero_joueur-1][i].couleur==0))//si l'utilisaeur n'a pas 6 tuiles
        {
            do
            {
                carte_pioche=rand()%(108-0);
            }while((pioche[carte_pioche].forme=='p')&&(pioche[carte_pioche].couleur==0));

            mains_joueurs[numero_joueur-1][i]=pioche[carte_pioche];
            pioche[carte_pioche].forme='p';
            pioche[carte_pioche].couleur=0;
            i=6;
        }
        if((i==5)&&(mains_joueurs[numero_joueur-1][i].forme!='p')&&(mains_joueurs[numero_joueur-1][i].couleur!=0))
        {
            printf("Vous ne pouvez pas piocher\n");
        }
    }

}

void poser_tuile(int numero_joueur,struct Tuile mains_joueurs[][6],struct Tuile plateau[13][27])
{
    char forme;
    int couleur;
    int i,j,k;

    printf("Quelle tuile voulez vous poser (forme)?\n");
    scanf(" %c",&forme);
    printf("Quelle couleur ?\n");
    scanf(" %d",&couleur);

    for(i=0;i<6;i++)
    {
        if((mains_joueurs[numero_joueur-1][i].forme==forme)&&(mains_joueurs[numero_joueur-1][i].couleur==couleur))
        {
            char position_x,position_y;
            printf("ou voulez vous ajouter votre Tuile ?\n");
            scanf (" %c",&position_x);
            scanf (" %c",&position_y);

            for(j=0;j<27;j++)
            {
                if(plateau[0][j].forme==position_x)
                {
                    for (k=0;k<13;k++)
                    {
                        if(plateau[k][0].forme==position_y)
                        {
                            plateau[k][j]=mains_joueurs[numero_joueur-1][i];
                            mains_joueurs[numero_joueur-1][i].forme='p';
                            mains_joueurs[numero_joueur-1][i].couleur=0;
                            k=13;
                            j=27;
                            i=6;
                        }

                    }
                }

            }

        }
        if((i==5)&&(mains_joueurs[numero_joueur-1][i].forme=='p')&&(mains_joueurs[numero_joueur-1][i].couleur==0))
        {
            printf("vous n'avez pas cette tuile\n");
        }
    }
}

