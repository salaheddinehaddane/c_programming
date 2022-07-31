#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**Le but est de concevoir un jeu
de domino en langage C. En fait,
on souhaite écrire un programme en langage C
permettant de jouer aux dominos contre l'ordinateur.**/

/**
Quelques indications:
Il y a 28 dominos et 7 par joueurs (2joueurs)
C'est celui qui a le domino le plus fort qui commence
Chaque joueur doit garder ses dominos cachés
Lorsqu'un joueur n'a pas de domino à jouer, il passe son tour.
Le permier qui a posé tous ces dominos à gagner
Si personne ne pose tous ses dominos, c'est celui qui en a le moins qui gagne.
**/

main()
{
    int j,i,domino[28],joueur[2][7];
    int k=0,val,gauche,droite,a,b,Max,test,dom;

    /// initialiser la fonction rand()
    srand(time(NULL));

    /// generer tous les dominos

    for(i=0;i<7;i++)
        for(j=i;j<7;j++)
    {
        domino[k]=i*10+j;
     ///   printf("%d\n\n",domino[k]);
        k+=1;
    }

    ///distribution de dominos au hasard

    for(i=0;i<7;i++)
    {
    for(j=0;j<2;j++)
    {
        do{
        val= rand() / (RAND_MAX + 1.0 ) * 28; /// double et 1.0 a la place de 1
        joueur[j][i]= domino[val];
         }while(domino[val] == 0 );
        domino[val]=0;
    }
    }

    /** Affichage des dominos, NB: joueur[0][i] sont les dominos de la machine et
    joueur[1][i] sont celle de l'humaine **/
    for(i=0;i<7;i++)
    {
        gauche = joueur[1][i]/10;
        droite = joueur[1][i] - gauche*10;
        printf("La piece #%d est : %d | %d\n",i+1,gauche,droite);

    }
    printf("NB: Si votre domino est 6 | 6 ecrivez : 66\n\n");


    /// le joueur qui va commencer le jeu
   Max=0;
    for(i=0;i<7;i++)
    {
       for(j =0 ; j<2 ; j++)
       {
            if (Max < joueur[j][i])
               {
                 Max=joueur[j][i];
                 test=j;
               }
       }
    }

    /// L'affichage de joueur qui va commencer le jeu ainsi donner la main a l'utilisatur

             do
             {
                if(test){printf("Commencez le jeu par le domino le plus fort ! \n");
                 scanf("%d",&dom);}
                 else{printf("La machine qui va commencer !\n\n");
                     dom=Max;
                     }

             }while(Max!=dom); /// c juste pour verifier que l utilisateur a entré le plus fort


    ///


}

