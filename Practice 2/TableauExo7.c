#include<stdlib.h>
main()
{
 int i,n,nb,j,s;
    int *t;
    t=(int*)malloc(sizeof(int)*nb);
     printf("Entrez le nombre d element : ");
  scanf("%d",&nb);
  printf("Entrez les elements du Tableau : \n");
  for(i=0;i<nb;i++)
    {
        scanf("%d",&t[i]);
    }
     for(i=0;i<nb;i++)
        {
     for(j=0;j<nb;j++)
        {
            if(t[j]>t[i])
        {
            s= t[i];
            t[i]=t[j];
            t[j]=s;
        }
        }
        }

     printf("Voila les elements du Tableau en ordre croissante :");
    for(i=0;i<nb;i++)
    {
        printf("\n%d",t[i]);
    }

 for(i=0;i<nb;i++)
        {
     for(j=0;j<nb;j++)
        {
            if(t[i]>t[j])
        {
            s= t[i];
            t[i]=t[j];
            t[j]=s;
        }
        }
        }
        printf("\n\nVoila les elements du Tableau en ordre decroissante :");
    for(i=0;i<nb;i++)
    {
        printf("\n%d",t[i]);
    }
}
