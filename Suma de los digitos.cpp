#include <stdio.h>
main(){
	unsigned A,B,C,Sum,Num;
	printf("Digite el n%cmero",163);
	scanf("%u",&Num);
	A = Num/100;
	B = ((Num%100)/10);
	C = Num%10;
	printf("El n%cmero digitado es %u",163,Num);
	Sum = (A+B+C);
	printf("La suma de los d%cgitos es %u",161,Sum);	
}
