main()
{
    int a , b;
    scanf("%d%d",&a,&b);
    while(a!=b)
    {if(a>b)
        {
            a=a-b;
        }
    else if(b>a)
    {
        b=b-a;
    }
    printf("Le PGCD : %d",a);
    }

}

///pas complet
