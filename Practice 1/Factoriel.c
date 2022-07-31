main()
{
    int fact , n , i;
    scanf("%d",&n);
    fact=n;
    for(i=1;i<n;i=i+1)
    {
        fact=fact*(n-i);
    }
    printf("%d",fact);

    /// la version plus efficace
    /**   p=1;
    for ( i=0 ; i<n ; i++)
        {
            p=p*(n-i);

        }**/
}
