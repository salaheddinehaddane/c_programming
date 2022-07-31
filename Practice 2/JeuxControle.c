 main()
 {
 int p, j ,i;
 printf("Allons jouer au Pierre Feuille Ciseaux !! \n\n ");
 for(i=1;i<=5;i++)
 {
 p=rand()%3+1;
 printf("Faites votre choix  Pierre(1) Feuille(2) Ciseaux(3) : ");
 scanf("%d",&j);
 if(j==p){printf("\n\nPas de gagnant\n\n");}
 else
 {
 if(j==1&&p==2) {printf("\n\n Le Pc gagne \n\n");}
 if(j==2&&p==1) {printf("\n\n Vous avez gagne \n\n");}
 if(j==1&&p==3) {printf("\n\n Le Pc gagne \n\n");}
 if(j==3&&p==1) {printf("\n\n Vous avez gagne \n\n");}
 if(j==2&&p==3) {printf("\n\n Le Pc gagne \n\n");}
 if(j==3&&p==2) {printf("\n\n Vous avez gagne \n\n");}

 }
 }
printf("---------------------------------------------------------\n\n\n");
 }
