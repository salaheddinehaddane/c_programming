#include <stdio.h>
#include <stdlib.h>
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

/**Remarque:
pour obtenire des valeurs aleatoire dans un intervalle de "m" a "n"
on ecrit ce code :
a= rand() / (RAND_MAX +1.0 ) * (n - m + 1)
par default RAND_MAX=32767
**/

void show_domino(int * player)
	{
		int i,a,b;
		for(i=0 ; i<7 ; i++)
			{ /// if domino = 36 "a" will be take 3 and "b" take 6
				a = player[i]/10 ;
				b = player[i]-a*10 ;
				printf("Your domino #%d is : %d | %d \n", i+1 , a , b );

			}
		return ;
	}

int main(int argc , char * argv[]) ///declaration
	{
		// Declaring variables :
		int i,j,k=0;
		int domino[28], player[2][7] , randomino ;

		// Set center of entropy for rand()
		srand((int) time(NULL)) ;

		// Generate all possible dominos
    /// Clever ! you have to generate a number > 6 in the right or left of the piece eg: "10 = 1" "11" "12" "13" "14" "15" "16" /and "17" does not exist
		for(i = 0 ; i < 7 ; i++)
			for(j = i ; j < 7 ; j ++)
				{
					// A domino | A | B | is represented AB ( ex : 1|2 -> 12 )
					domino[k++] = i*10 + j ;
				}
		// Give 7 domino to each player :
		for(i=0 ; i<7 ; i++)
			{
				// Select a random dominos for each player :
				for(j=0 ; j<2 ; j++)
					{
						do
						{
							// Random domino :
							randomino = (double) rand()/(RAND_MAX + 1) * 28 ;
							// Assign domino to player :
							player[j][i] = domino[randomino] ;
							// All that if domino is not already taken of course :
						} while(domino[randomino] == 0) ;

						// Set domino as taken :
						domino[randomino] = 0 ;
					}
			}

		// Show player's dominos :
		show_domino(player[0]) ;

		return 0;
	}
/**
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_domino(int * domino)
	{
		int i,a,b;
		for(i=0 ; i<7 ; i++)
			{
				a = domino[i]/10 ;
				b = domino[i]-a*10 ;
				printf("Your domino #%d is : %d | %d \n", i+1 , a , b );
			}
		return ;
	}

int main(int argc , char * argv[])
	{
		// Declaring variables :
		int i,j,k=0;
		int domino[28], player[2][7] , randomino ;

		// Set center of entropy for rand()
		srand((int) time(NULL)) ;

		// Generate all possible dominos
		for(i = 0 ; i < 7 ; i++)
			for(j = i ; j < 7 ; j ++)
				{
					// A domino | A | B | is represented AB ( ex : 1|2 -> 12 )
					domino[k++] = i*10 + j ;
				}

		// Give 7 domino to each player :
		for(i=0 ; i<7 ; i++)
			{
				// Select a random dominos for each player :
				for(j=0 ; j<2 ; j++)
					{
						do
						{
							// Random domino :
							randomino = (double) rand()/(RAND_MAX + 1) * 28 ;
							// Assign domino to player :
							player[j][i] = domino[randomino] ;
							// All that if domino is not already taken of course :
						} while(domino[randomino] == 0) ;

						// Set domino as taken :
						domino[randomino] = 0 ;
					}
			}

		// Show player's dominos :
		show_domino(player[0]) ;

		return 0;
	}

**/
