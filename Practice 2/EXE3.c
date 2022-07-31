main()
{
    int a , i ,s,k,r;
printf("Entrez un nombre entier :");
scanf("%d",&a);
s=0;
k=0;
    for(i=1;i<=a;i++)
    {
        r= s+i;
        k=r+k;


    }
printf("%d \n ",k);

}
