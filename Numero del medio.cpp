#include <stdio.h>
main(){
	unsigned A,B,C,Num;
	printf("Digite el n%cmero",163);
	scanf("%u",&Num);
	A = Num/100;
	B = ((Num%100)/10);
	C = Num%10;
	printf("El n%cmero digitado es %u",163,Num);
	printf("El n%cmero del medio es %u",163,B);
}
