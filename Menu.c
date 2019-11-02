#include "Menu.h"

void initialisation_joueurs(struct Joueur nombre_joueur[],int nb)//init du tableau des Joueurs
{
    int i;
    for(i=1; i<=nb; i++) //boucle de saisie des informations de chaque joueur
    {
        struct Joueur player;
        printf("Veuillez saisir le nom du joueur numero %d\n",i);
        scanf("%s", &player.nom);//nom
        player.numero_joueur=i;//numero
        player.score=0;//score
    }

}





void affichage_menu()
{
    int choix_menu;//variable de choix


    Color(3,7);
    printf("***** Bienvenue dans le menu principal de Qwirkle *****\n\n");
    Color(3,0);
    printf("1. Nouvelle partie. \n");
    printf("2. Reprendre une partie Sauvegardee. \n");
    printf("3. Consulter les scores. \n");
    printf("4. Consulter les regles. \n");//interface utilisateur
    printf("5. Jouer en mode degrade. \n\n");


    do
    {
        Color(3,0);
        printf("Veuillez saisir votre choix : ");
        scanf("%d",&choix_menu);
        Color(15,0);
        switch(choix_menu)
        {
        case 1://choix menu Nouvelle partie
        {
            char choix_menu1;
            int nb;
            int i;
            struct Tuile pioche[108];
            struct Tuile plateau[13][27]= {0};

            struct Joueur* nombre_joueurs= NULL;
            struct Tuile** mains_joueurs=NULL;

            do
            {
                printf("veuillez saisir le nombre de joueurs :\n");
                scanf("%d",&nb);
                if((nb<2)||(nb>4))
                {
                    printf("Nombre de joueurs minimum 2, maximum 4\n\n");
                }
            }
            while((nb<2)||(nb>4));


            nombre_joueurs=malloc(nb*(sizeof(struct Joueur)));//allocation dynamique d'un tableau uni dimensionnel
            mains_joueurs=malloc(nb*(sizeof(struct Tuile*)));//allocation dynamique d'une matrice de tuiles(une ligne du tableau équivaut a la main d'un joueur)

            for(i=0; i<nb; i++)
            {
                mains_joueurs[i]=malloc(6*sizeof(struct Tuile));
            }

            initialisation_joueurs(nombre_joueurs,nb);
            initialisation_pioche(pioche);
            initialisation_matriceJeu(mains_joueurs,nb,pioche);
            initialisation_plateau(plateau);

            //affichage_pioche(pioche);
            //affichage_matriceJeu(mains_joueurs,nb);
            printf("%c",0x04);
            printf("%c",0x03);
            printf("%c",0x05);
            printf("%c",0x06);
            printf("%c",0xDB);
            printf("%c",0xDB);

            do
            {
            for(i=1;i<=nb;i++)
            {
                affichage_plateau(plateau);
                affichage_mainJ(mains_joueurs,i);
                menu_joueur(i,mains_joueurs,pioche,plateau);
                affichage_plateau(plateau);

            }
            printf("Voulez-vous continuer a jouer ?\n");
            scanf(" %c",&choix_menu1);
            }while(choix_menu1!='Q');

            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            break;
        }
        }
    }
    while(choix_menu>5||choix_menu<1);
}


void menu_joueur(int numero_joueur,struct Tuile mains_joueurs[][6],struct Tuile pioche[108],struct Tuile plateau[13][27])
{
    int choix_menu;

    printf(" Au tour du joueur numero %d :\n",numero_joueur);
    printf("Liste d'actions :\n");
    printf("1.Poser une tuile.\n");
    printf("2.Poser plusieurs tuiles.\n");
    printf("3.Piocher.\n");
    do
    {
        printf("Votre choix :");
        scanf(" %d",&choix_menu);
        if(choix_menu<1||choix_menu>3)
        {
            printf("Veuillez saisir un entier entre 1 et 3 inclus\n");
        }
    }
    while(choix_menu<1||choix_menu>3);

    switch(choix_menu)
    {
        case 1:
        {
            poser_tuile(numero_joueur,mains_joueurs,plateau);
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            piocher(mains_joueurs,pioche,numero_joueur);

            break;
        }
    }
}
