#include<stdlib.h>
main()
{
    int i , nb ,j, s;

    int *n;
  n=(int*)malloc(sizeof(int)*nb);
  for(i=0;;i++)
  {
      printf("Entrez le nombre d elements <10\n");
      scanf("%d",&nb);

          if(nb<10)
          {
              break;
          }
  }
  printf("Entrez les elements du tableau : \n");
  for(i=0;i<nb;i++)
    {
        scanf("%d",&n[i]);
        for(j=0;j<i;j++)
        {
            while(n[i]==n[j] )
            {
                printf("ce nombre existe deja Entrez un autre :");
                scanf("%d",&n[i]);

            }
        }
    }
    printf("Votre Tableau\n");

    for(i=0;i<nb;i++)
    {
        printf("%d\n",n[i]);
    }

}
