#include <stdio.h>
main(){
	int i=1,num,datos,mayor=0,menor=999999999;
	printf("¿Cu%cntos n%cmeros son?",160,163);
	scanf("%d",&datos);
	for(i=1;i<=datos;i++){
		printf("Digite el valor del n%cmero",163);
		scanf("%d",&num);
		if(num>mayor){
			mayor=num;
		}
		if(num<menor){
			menor=num;
		}
	}
	printf("El valor menor es %d y el valor mayor es %d",menor,mayor);
}
