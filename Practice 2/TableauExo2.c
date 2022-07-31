#include<stdlib.h>
main()
{
int i,nb,compt=0,tr=2 ;
int n[100];
for(i=0;;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]==-1)
        {
            break;
        }
        compt=compt+1;
    }
    printf("Tapez le nombre a chercher :");
    scanf("%d",&nb);
    for(i=0;i<=compt;i++)
    {
        if(n[i]==nb)
        {
         printf("Le nombre existe dans la position %d",i+1);
         tr=1;
         break;
        }
    }
   if(tr==2)
        {
         printf("Le nombre n existe pas");

        }
}
