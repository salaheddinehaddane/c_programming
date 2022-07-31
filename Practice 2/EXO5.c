main()
{
int prix,s,sp,rm,d,c,u;
s=0;
do{scanf("%d",&prix);
s=s+prix;
}while(prix != 0);
printf("Enrez la somme a paye : ");
scanf("%d",&sp);
rm=sp-s;
d=rm/10;
printf("10 dh %d fois\n",d);
rm=rm-d*10;
c=rm/5;
printf("5 dh %d fois\n",c);
rm=rm-c*5;
u=rm/2;
printf("1 dh %d fois",u);

}
