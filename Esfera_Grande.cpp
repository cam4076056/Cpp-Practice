#include <stdio.h>
main(){
	unsigned A,B,C;
	printf("Digite los valores de A,B y C");
	scanf("%u %u %u",&A,&B,&C);
	if((A!=B)&&(B!=C)&&(C!=A)){
		if(A>B && A>C){
			printf("A es la esfera m%cs pesada",160);
		}
		if(B>A && B>C){
			printf("B es la esfera m%cs pesada",160);
		}
		if(C>A && C>B){
			printf("C es la esfera m%cs pesada",160);
		}
	}else{
		printf("Hay dos o m%cs esferas iguales",160);
	}
	
	return 0;
}
