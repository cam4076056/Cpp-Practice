#include <stdio.h>
main(){
	int i=1,num,datos,positivo=0,negativo=0;
	printf("¿Cu%cntos n%cmeros son?",160,163);
	scanf("%d",&datos);
	for(i=1;i<=datos;i++){
		printf("Digite el valor del n%cmero",163);
		scanf("%d",&num);
		if(num>0){
			positivo=positivo+1;
		}
		if(num<0){
			negativo=negativo+1;
		}
	}
	printf("La cantidad de n%cmeros positivos ingresados es de %d y la cantidad de n%cmeros negativos ingresados es de %d",163,positivo,163,negativo);
}
