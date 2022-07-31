
/// c est pas un code c est juste pour l explication


main(){
int x,*y ;   ///declarer y comme ca pour pouvoir l affecter l adresse dune variable
x=4 ;
y=&x ; /// affecter l adresse de x a y
printf("%p",&x) ; /// afficher l adresse de x
*y=*y+1 ;   /// *y c est la valeure de x alors tu sera trouver 5 en x
printf("\n%p",y) ;  /// afficher le contenue de y est c l adresse de x
printf("\n%p",&y) ;  /// afficher l adresse de y .
printf("\%d",x);   ///
printf("\n%d",*y); /// rien a afficher
}
main(){
int x,y,s,*a,*b ;
x=4 ;
y=5 ;
a=&x ;
b=&y ;
s=*a+ *b; /// affecter a s la somme de x et y
printf("%d",s) ;
}
