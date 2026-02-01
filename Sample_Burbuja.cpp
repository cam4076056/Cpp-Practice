#include <stdio.h>
main(){
	int i,j,datos,cache;
	printf("¿Cu%cntos n%cmeros son? ",160,163);
	scanf("%d",&datos);
	int numeros[datos];
	for(i=0;i<datos;i++){
		printf("Digite el valor del n%cmero ",163);
		scanf("%d",&numeros[i]);
	}
	printf("Los valores ingresados fueron:\n\n");
	for(i=0;i<datos;i++){
		printf("%d\t",numeros[i]);
	}
	for(i=0;i<(datos-1);i++){
		for(j=i+1;j<datos;j++){
			if(numeros[i]>numeros[j]){
				cache=numeros[i];
				numeros[i]=numeros[j];
				numeros[j]=cache;
		    }
		}
	}
	printf("\n\nLos valores organizados son:\n\n");
	for(i=0;i<datos;i++){
		printf("%d\t",numeros[i]);
	}
}
