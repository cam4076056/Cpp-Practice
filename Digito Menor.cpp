#include <stdio.h>
main(){
	unsigned A,B,C,Num;
	printf("Digite el n%cmero",163);
	scanf("%u",&Num);
	A = Num/100;
	B = ((Num%100)/10);
	C = Num%10;
	printf("El n%cmero digitado es %u",163,Num);
	if((A<B)&&(A<C)){
		printf("El primer d%cgito es el menor",161);
	}
	if((B<A)&&(B<C)){
		printf("El segundo d%cgito es el menor",161);
	}
	if((C<A)&&(C<B)){
		printf("El tercer d%cgito es el menor",161);
    }
}
