#include<stdlib.h>
main()
{
 int i,n,nb,j,max,min;
    int *t;
    t=(int*)malloc(sizeof(int)*nb);
     printf("Entrez le nombre d element : ");
  scanf("%d",&nb);
  printf("Entrez les elements du Tableau : \n");
  for(i=0;i<nb;i++)
    {
        scanf("%d",&t[i]);
    }
        max=0;
    for(i=0;i<nb;i++)
    {
     if(t[i]>max){max=t[i];}
    }
    printf("\nLe maximum est = %d",max);


    min=0;
    for(i=0;i<nb;i++)
    {
     if(t[i]<min){min=t[i];}
    }
     printf("\nLe minimum est = %d",min);

}
