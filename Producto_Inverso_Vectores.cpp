#include <stdio.h>
main(){
	int datos;
	printf("¿Cu%cntos datos deben almacenarse en cada arreglo? ",160);
	scanf("%d",&datos);
	int grupo1[datos];
	int grupo2[datos];
	int i;
	printf("Se ingresar%cn los datos para el primer arreglo\n\n",160);
	for(i=0;i<datos;i++){
		printf("Ingrese el n%cmero ",163);
		scanf("%d",&grupo1[i]);
	}
	int j;
	printf("\n\nSe ingresar%cn los datos para el segundo arreglo\n\n",160);
	for(j=0;j<datos;j++){
		printf("Ingrese el n%cmero ",163);
		scanf("%d",&grupo2[j]);
	}
	int k=0;
	int producto[datos];
	j=datos-1;
	for(i=0;i<datos;i++){
		producto[k]=grupo1[i]*grupo2[j];
		j=j-1;
		k=k+1;
	}
	printf("\n\nLos datos ingresados para ambos grupos son\n\n");
	for(i=0;i<datos;i++){
		printf("%d  ",grupo1[i]);
	}
	printf("\n\n");
	for(j=0;j<datos;j++){
		printf("%d  ",grupo2[j]);
	}
	printf("\n\nLos productos de las posiciones son\n\n");
	for(k=0;k<datos;k++){
		printf("%d  ",producto[k]);
	}
}

