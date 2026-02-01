#include <stdio.h>
main(){
	int A,B,C,D;
	printf("Ingrese los valores de A,B,C y D");
	scanf("%d %d %d %d",&A,&B,&C,&D);
	if ((A!=B)&&(B!=C)&&(C!=D)&&(A!=C)&&(A!=D)&&(B!=D)){
		if((A>B)&&(A>C)&&(A>D)){
			printf("A es el valor mayor");
		}
		if((B>A)&&(B>C)&&(B>D)){
			printf("B es el valor mayor");
		}
		if((C>A)&&(C>B)&&(C>D)){
			printf("C es el valor mayor");
		}
		if((D>A)&&(D>B)&&(D>C)){
			printf("D es el valor mayor");
		}
	}else{
		printf("Hay dos o m%cs valores iguales",160);
	}
	return 0;
}
