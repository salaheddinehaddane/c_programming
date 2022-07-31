#include<stdlib.h>
main()
{
 int i,s,nb,j,compt;
    int *t;
    t=(int*)malloc(sizeof(int)*nb);
     printf("Entrez le nombre d element : ");
  scanf("%d",&nb);
  printf("Entrez les elements du Tableau : \n");
  for(i=0;i<nb;i++)
    {
        scanf("%d",&t[i]);
    }
    compt=0;
    s=1;
    for(i=0;i<nb;i=i+compt)
    {
        if(t[i]==1)
        {
            for(j=i+1;j<nb;j++)
            {
                if(t[j]==1){s=s+1;compt=compt+1;}
                else{break;}

            }
        }
    }
 printf("La somme est %d",s);


    }
