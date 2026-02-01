#include <stdio.h>
#include <stdlib.h>
main(){
	int datos[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};
	int i,j,fila=3,columna=4;
	float filas[3],columnas[4];
	for(i=0;i<3;i++){
		filas[i]=0;
	}
	for(j=0;j<4;j++){
		columnas[j]=0;
	} 
	for(i=2;i>=0;i--){
		for(j=3;j>=0;j--){
			filas[i]=filas[i]+datos[i][j];
			columnas[j]=columnas[j]+datos[i][j];
		}
	}
	printf("La matriz es la siguiente\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d  ",datos[i][j]);
			if(j==3){
				printf("\n\n");
			}
		}
	}
	system("pause");
	printf("Las filas se exploraron de abajo a arriba y contienen las siguientes sumas\n\n");
	for(i=2;i>=0;i--){
		printf("%g  ",filas[i]);
	}
	printf("\n\n");
	system("pause");
	printf("Las columnas se exploraron de derecha a izquierda y contienen las siguientes sumas\n\n");
	for(j=3;j>=0;j--){
		printf("%g  ",columnas[j]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			filas[i]=(filas[i]/fila);
			columnas[j]=(columnas[j]/columna);
		}
	}
	printf("\n\n");
	system("pause");
	printf("Las filas contienen los siguientes promedios\n\n");
	for(i=0;i<3;i++){
		printf("%f  ",filas[i]);
	}
	printf("\n\n");
	system("pause");
	printf("Las columnas contienen los siguientes promedios\n\n");
	for(j=0;j<4;j++){
		printf("%f  ",columnas[j]);
	}
	
}
