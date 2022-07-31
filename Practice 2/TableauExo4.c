#include<stdlib.h>
main()
{
    int nb,n,j,i,s;
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
    printf("Entrez l indice de nouvelle element : ");
    scanf("%d",&j);
   /** s=t[j-1];
    t[j-1]=n;
    for(i=j+1;i<nb+1;i++)
    {
        t[i+1]=t[i];
    }

    for(i=0;i<nb+1;i++)
    {
        printf("\n%d",t[i]);
    }**/


    for(i=nb;i<=j;i--)
    {
        t[i]=t[i-1];
    }
    t[j-1]=n;
     for(i=0;i<nb+1;i++)
    {
        printf("\n%d",t[i]);
    }


}
