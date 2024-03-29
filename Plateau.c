#include "Plateau.h"

void initialisation_main(struct Tuile mains_joueurs[][6],int i,struct Tuile pioche[108])
{
    int j,carte_pioche;


    for(j=0;j<6;j++)
    {
        do
        {
            carte_pioche=rand()%(108-0);
        }while((pioche[carte_pioche].forme=='p')&&(pioche[carte_pioche].couleur==0));
        mains_joueurs[i][j]=pioche[carte_pioche];
        pioche[carte_pioche].forme='p';
        pioche[carte_pioche].couleur=0;

    }

}
void initialisation_pioche(struct Tuile pioche[108])
{
    int i;

    for(i=0;i<108;i++)
    {
        if(i<18)
        {
            pioche[i].forme='a';
           if(i<3)
           {
               pioche[i].couleur=1;
           }
           if((i>2)&&(i<6))
           {
               pioche[i].couleur=2;
           }
           if((i>5)&&(i<9))
           {
               pioche[i].couleur=3;
           }
           if((i>8)&&(i<12))
           {
               pioche[i].couleur=4;
           }
           if((i>11)&&(i<15))
           {
               pioche[i].couleur=5;
           }
           if(i>14)
           {
               pioche[i].couleur=6;
           }
        }
        if((i>17)&&(i<36))
        {
            pioche[i].forme='b';
           if(i<21)
           {
               pioche[i].couleur=1;
           }
           if((i>20)&&(i<24))
           {
               pioche[i].couleur=2;
           }
           if((i>23)&&(i<27))
           {
               pioche[i].couleur=3;
           }
           if((i>26)&&(i<30))
           {
               pioche[i].couleur=4;
           }
           if((i>29)&&(i<33))
           {
               pioche[i].couleur=5;
           }
           if(i>32)
           {
               pioche[i].couleur=6;
           }
        }
        if((i>35)&&(i<54))
        {
            pioche[i].forme='c';
           if(i<39)
           {
               pioche[i].couleur=1;
           }
           if((i>38)&&(i<42))
           {
               pioche[i].couleur=2;
           }
           if((i>41)&&(i<45))
           {
               pioche[i].couleur=3;
           }
           if((i>44)&&(i<48))
           {
               pioche[i].couleur=4;
           }
           if((i>47)&&(i<51))
           {
               pioche[i].couleur=5;
           }
           if(i>50)
           {
               pioche[i].couleur=6;
           }
        }
        if((i>53)&&(i<72))
        {
            pioche[i].forme='d';
           if(i<57)
           {
               pioche[i].couleur=1;
           }
           if((i>56)&&(i<60))
           {
               pioche[i].couleur=2;
           }
           if((i>59)&&(i<63))
           {
               pioche[i].couleur=3;
           }
           if((i>62)&&(i<66))
           {
               pioche[i].couleur=4;
           }
           if((i>65)&&(i<69))
           {
               pioche[i].couleur=5;
           }
           if(i>68)
           {
               pioche[i].couleur=6;
           }
        }
        if((i>71)&&(i<90))
        {
            pioche[i].forme='e';
           if(i<75)
           {
               pioche[i].couleur=1;
           }
           if((i>74)&&(i<78))
           {
               pioche[i].couleur=2;
           }
           if((i>77)&&(i<81))
           {
               pioche[i].couleur=3;
           }
           if((i>80)&&(i<84))
           {
               pioche[i].couleur=4;
           }
           if((i>83)&&(i<87))
           {
               pioche[i].couleur=5;
           }
           if(i>86)
           {
               pioche[i].couleur=6;
           }
        }
        if((i>89)&&(i<108))
        {
            pioche[i].forme='f';
           if(i<93)
           {
               pioche[i].couleur=1;
           }
           if((i>92)&&(i<96))
           {
               pioche[i].couleur=2;
           }
           if((i>95)&&(i<99))
           {
               pioche[i].couleur=3;
           }
           if((i>98)&&(i<102))
           {
               pioche[i].couleur=4;
           }
           if((i>101)&&(i<105))
           {
               pioche[i].couleur=5;
           }
           if(i>104)
           {
               pioche[i].couleur=6;
           }
        }

    }

}
void initialisation_plateau(struct Tuile plateau[13][27])
{
    int i,k;

    for(i=1;i<13;i++)
    {
        k=i-1;
        plateau[i][0].forme='A'+k;
    }
    for(i=1;i<27;i++)
    {
        k=i-1;
        plateau[0][i].forme='a'+k;
    }


}
void affichage_plateau(struct Tuile plateau[13][27])
{
    int i,j;
    for(i=0;i<13;i++)
    {
        for(j=0;j<27;j++)
        {
            printf(" %c",plateau[i][j].forme);
        }
        printf("\n");
    }

}
void affichage_pioche(struct Tuile pioche[108])
{
    int i;

    for(i=0;i<108;i++)
    {
        printf("%c %d\n",pioche[i].forme,pioche[i].couleur);
    }

}
