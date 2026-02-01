#include <stdio.h>
main(){
	int n=0;
	printf("¿Cu%cntos datos son? ",160);
	do{
		scanf("%d",&n);
	}while(n<0);
	int i;
	int numeros[n];
	for(i=0;i<n;i++){
		printf("Digite el valor del dato ");
		scanf("%d",&numeros[i]);
	}
	int suma=0,resto=0;
	for(i=0;i<n;i++){
		if((n%2)==0){
			if(i==((n/2)-1)){
				resto=resto+numeros[i];
			}
			if(i==(n/2)){
				resto=resto+numeros[i];
			}
		}
		if((n%2)==1){
			if(i==((n-1)/2)){
				resto=resto+numeros[i];
			}
		}
		if(i==0){
			resto=resto+numeros[i];
		}
		if(i==(n-1)){
			resto=resto+numeros[i];
		}
		suma=suma+numeros[i];
	}
	suma=suma-resto;
	printf("Los datos ingresados son\n\n");
	for(i=0;i<n;i++){
		printf("%d  ",numeros[i]);
	}
	printf("\n\nLa suma especial de los datos es %d",suma);
}
