#include <stdio.h>
main(){
	unsigned i=1,datos,mayor=0,n;
	printf("¿Cu%cntos datos son?",160);
	scanf("%u",&datos);
	while(i<=datos){
		printf("Digite el valor del dato");
		scanf("%u",&n);
		if(n>mayor){
			mayor=n;
		}
		i=i+1;
	}
	printf("El valor del dato mayor es %u",mayor);
}
