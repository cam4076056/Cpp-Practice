#include <stdio.h>
main(){
	int i=1,sum=0,datos,num;
	float promedio=0;
	printf("¿Cu%cntos n%cmeros son?",160,163);
	scanf("%d",&datos);
	for(i=1;i<=datos;i++){
		printf("Digite el valor del n%cmero",163);
		scanf("%d",&num);
		sum=sum+num;
	}
	promedio=((sum)/(datos));
	printf("El valor del promedio es %f",promedio);
}
