main()

{
    char mot[100],inv[100];
    int i , nb;
    printf("Entrez une chaine");
    gets(mot);
    nb=strlen(mot);
    for (i=0;i<nb;i++)
    {
        inv[nb-1 -i]=mot[i];
    }
    inv[nb]="\0";
    printf("l inverse est : %s",inv);
    }
