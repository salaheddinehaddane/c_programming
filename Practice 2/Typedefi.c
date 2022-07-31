
typedef struct{
    char jour [20];
    char mois [20];
    int annee;
} type_date;
main()
{
    type_date date1, date2 , date3 ;

    /// date 1


    printf("La date 1 : \n\n");
    printf("Jour : ");
    scanf("%s",date1.jour);
    printf("Mois: ");
    scanf("%s",date1.mois);
    printf("Annee: ");
    scanf("%d",&date1.annee);

    printf("\nLa date 1 est : %s / %s / %d",date1.jour,date1.mois,date1.annee);


    ///date 2

        printf("\n\n La date 2 : \n\n");
    printf("Jour : ");
    scanf("%s",date2.jour);
    printf("Mois: ");
    scanf("%s",date2.mois);
    printf("Annee: ");
    scanf("%d",&date2.annee);

    printf("\n\n La date 2 est : %s / %s / %d",date2.jour,date2.mois,date2.annee);


    ///date 3


        printf("La date 3 : \n\n");
    printf("Jour : ");
    scanf("%s",date3.jour);
    printf("Mois: ");
    scanf("%s",date3.mois);
    printf("Annee: ");
    scanf("%d",&date3.annee);

    printf("\n\nLa date 3 est : %s / %s / %d",date3.jour,date3.mois,date3.annee);


    ///triage





}
