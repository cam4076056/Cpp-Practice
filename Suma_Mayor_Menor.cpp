#include <stdio.h>
main(){
	unsigned i=1,datos,mayor=0,menor=999999999,n,sum=0;
	printf("¿Cu%cntos datos son?",160,163);
	scanf("%u",&datos);
	while(i<=datos){
		printf("Digite el valor del dato");
		scanf("%u",&n);
	    if(n>mayor){
	    	mayor=n;
		}
		if(n<menor){
			menor=n;
		}
		i=i+1;
	}
	sum=mayor+menor;
	printf("El valor de la suma entre el mayor y el menor es %u",sum);
}
