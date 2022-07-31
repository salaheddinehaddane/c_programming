#include<stdlib.h>
main()
{
    int i , nb;
    float s;
    float *n;
    s=0;
    scanf("%d",&nb);
    n=(float*)malloc(sizeof(float)*nb); ///création d'un tableau dynamique
    for(i=0;i<nb;i++)
    {
        scanf("%f",&n[i]);
        s=s+n[i];
    }
    printf("La moyenne des notes : \n");
    for(i=0;i<nb;i++)
    {
        printf("%f\n",n[i]);
    }
    printf("Est : %f",s/nb);
}
