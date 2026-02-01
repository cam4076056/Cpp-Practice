#include <stdio.h>
main(){
	int datos;
	printf("¿Cu%cntos datos son? ",160);
	scanf("%d",&datos);
	int valores[datos];
	int i,suma=0;
	float promedio=0;
	for(i=0;i<datos;i++){
		printf("Ingrese el n%cmero ",163);
		scanf("%d",&valores[i]);
		suma=suma+valores[i];
	}
	promedio=(suma/datos);
	int mayor=0,menor=0;
	for(i=0;i<datos;i++){
		if(valores[i]<=promedio){
			menor=menor+1;
		}
		if(valores[i]>promedio){
			mayor=mayor+1;
		}
	}
	int mayores[mayor],menores[menor];
	int j=0,k=0;
	for(i=0;i<datos;i++){
		if(valores[i]<=promedio){
			menores[j]=valores[i];
			j=j+1;
		}
		if(valores[i]>promedio){
			mayores[k]=valores[i];
			k=k+1;
		}
	}
	printf("Los valores ingresados fueron\n\n");
	for(i=0;i<datos;i++){
		printf("%d  ",valores[i]);
	}
	printf("\n\nLos valores menores o iguales al promedio son\n\n");
	for(j=0;j<menor;j++){
		printf("%d  ",menores[j]);
	}
	printf("\n\nLos valores mayores al promedio son\n\n");
	for(k=0;k<mayor;k++){
		printf("%d  ",mayores[k]);
	}
}
