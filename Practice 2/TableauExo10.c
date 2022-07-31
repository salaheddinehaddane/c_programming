#include<stdlib.h>
main()
{
 int i,s,nb,j,compt=1;
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
        for(j=i+1;j<nb;j++)
        {
          if(t[i]==t[j]) {compt=compt+1;}

        }
        if(compt>1){
        printf("\n%d  %d fois",t[i],compt);}
        compt=1;
    }
}
