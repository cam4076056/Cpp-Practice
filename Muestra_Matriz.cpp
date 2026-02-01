#include <stdio.h>
#include <stdlib.h>
main(){
	int datos[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};	
	int i,j, filas[3],columnas[4];
	for(i=0;i<3;i++){
		filas[i]=0;
	}
	for(j=0;j<4;j++){
		columnas[j]=0;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			columnas[j]=columnas[j]+datos[i][j];
		}
	}
	for(j=0;j<4;j++){
		for(i=0;i<3;i++){
			filas[i]=filas[i]+datos[i][j];
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
	printf("Las filas contienen las siguientes sumas\n\n");
	for(i=0;i<3;i++){
		printf("%d  ",filas[i]);
	}
	printf("\n\n");
	system("pause");
	printf("Las columnas contienen las siguientes sumas\n\n");
	for(j=0;j<4;j++){
		printf("%d  ",columnas[j]);
	}
}
