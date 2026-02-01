#include <stdio.h>
main(){
	unsigned n,i=1,sum=0;
	printf("Digite el impar l%cmite",161);
	scanf("%u",&n);
	if(n%2 == 1){
		while(i<=n){
			sum=sum+i;
			i=i+2;
		}
		printf("El resultado de la suma es %u",sum);
	}else{
		printf("Por favor digite un n%cmero impar",163);
	}
}
