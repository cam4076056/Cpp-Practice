#include <stdio.h>
main(){
	unsigned n,a=1,p=1;
	printf("Digite un valor entre 5 y 15");
	scanf("%u",&n);
	if((n>=5)&&(n<=15)){
		while(a<=n){
			p=a*p;
			a=a+1;
		}
		printf("El valor factorial es equivalente a %u",p);
	}else{
		printf("El valor ingresado no hace parte del rango");
	}
}
