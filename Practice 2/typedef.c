#include<stdio.h>
typedef struct {
	int j;
	int m ;
	int a ;

}type_date; /// new type
main (){

type_date d1,d2,d3,p;

printf ("entrer la premiere date (j-m-a): ");
scanf("%d-%d-%d",&d1.j,&d1.m,&d1.a);

printf ("entrer la deuxième date (j-m-a): ");
scanf("%d-%d-%d",&d2.j,&d2.m,&d2.a);

printf ("entrer la troisième date (j-m-a): ");
scanf("%d-%d-%d",&d3.j,&d3.m,&d3.a);

printf(" %d / %d / %d \n",d1.j,d1.m,d1.a);
printf("\n %d / %d / %d\n ",d2.j,d2.m,d2.a);
printf("\n %d / %d / %d ",d3.j,d3.m,d3.a);

///	if (d1.a>d2.a || (d1.a==d2.a && d1.m>d2m || (d1.a=d2/ma)));
};
