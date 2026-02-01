#include <stdio.h>
main(){
	int datos,i,sumpar=0,sumimpar=0;
	printf("¿Cu%cntos n%cmeros son? ",160,163);
	do{
		scanf("%d",&datos);
	}while(datos<=0);
	int numeros[datos];
	for(i=0;i<datos;i++){
		printf("Digite el valor del n%cmero ",163);
		scanf("%d",&numeros[i]);
		if(i%2==0){
			sumpar=sumpar+numeros[i];
		}
		if(i%2==1){
			sumimpar=sumimpar+numeros[i];
		}
	}
	printf("Los datos ingresados fueron\n\n");
	for(i=0;i<datos;i++){
		printf("%d  ",numeros[i]);
	}
	printf("\n\nLa suma de las posiciones pares es equivalente a %d y la suma de las posiciones impares es equivalente a %d",sumpar,sumimpar);	
}
