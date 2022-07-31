#include<string.h>
main()
{
    char etu1[30] , etu3[30] ,etu2[30],p[30];
    int i;
    printf("Entrez les 3 noms: ");
    gets(etu1);
    gets(etu2);
    gets(etu3);
    if(strcomp(etu1,etu2))
    {
       strcpy(p,etu1);
       strcpy(etu1,etu2);
       strcpy(etu2,etu1);

    }
        if(strcomp(etu2,etu1))
        {
          strcpy(p,etu1);
       strcpy(etu1,etu2);      ///incomplet
       strcpy(etu2,etu1);

        }
        if(strcomp(etu2,etu3))
        {
         strcpy(p,etu1);
       strcpy(etu1,etu2);      ///incomplet
       strcpy(etu2,etu1);

        }
}
