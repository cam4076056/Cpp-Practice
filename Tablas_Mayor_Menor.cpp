#include <stdio.h>
main(){
	unsigned a,b,mayor=0,menor=0,base=1,r;
	printf("Digite los n%cmeros",163);
	scanf("%u %u",&a,&b);
	if((a!=b)&& (b!=a)){
		if(a>b){
			mayor = a;
			menor = b;
		}else{
			menor = a;
			mayor = b;
		}
		while (menor<=mayor){
			while (base<=10){
				r=menor*base;
				printf("%u*%u=%u\n",menor,base,r);
				base=base+1;
			}
			menor=menor+1;
			base=1;
		}		
	}else{
		printf("Los dos n%cmeros son iguales",163);
	}
}
