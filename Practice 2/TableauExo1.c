#include<stdlib.h>
main()
{
    int i , nb , s;
    int n[6];

    for(i=0;i<6;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Avant permutation \n");

    for(i=0;i<6;i++)
    {
        printf("%d\n",n[i])
        ;
    }
    printf("\nApres permutation \n");

    for(i=0;i<6;i=i+2)
    {
        s=n[i];
        n[i]=n[i+1];
        n[i+1]=s;

    }

     for(i=0;i<6;i++)
    {
        printf("%d\n",n[i]);
    }
}

