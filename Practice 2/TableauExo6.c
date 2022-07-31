#include<stdlib.h>
main ()
{
    int i,n,nb,j,test=0;
    int *t;
    t=(int*)malloc(sizeof(int)*nb);
     printf("Entrez le nombre d element : ");
  scanf("%d",&nb);
  for(i=0;i<nb;i++)
    {
        scanf("%d",&t[i]);
    }
    printf("Entrez le nouvelle element : ");
    scanf("%d",&n);
    for(i=0;i<nb;i++)
    {
        if(t[i]==n)
        {
                test=1;
        for(j=i;j<nb-1;j++)
        {
            t[j]=t[j+1];
        }
        }
    }
    if(test==1)
    {
printf("Voila les elements du Tableau");

    for(i=0;i<nb-1;i++)
    {
        printf("\n%d",t[i]);
    }
    }
    else
    {
      printf("\nelement introuvable\n ");
         for(i=0;i<nb;i++)
    {
        printf("\n%d",t[i]);
    }
    }
}
