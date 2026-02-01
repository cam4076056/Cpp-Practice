#include <stdio.h>
#include <math.h>
main(){
	int i=1,lect=0,n,cuad,cubo,datos;
	float raiz;
	printf("¿Cu%cntos datos son",160);
	scanf("%d",&datos);
	if(datos>0){
		lect=datos;
		while(i<=lect){
			printf(" Digite el valor del dato");
			scanf("%d",&n);
			if(n>=0){
				raiz=sqrt(n);
				cuad=pow(n,2);
				cubo=pow(n,3);
				printf("La ra%cz del dato es %f, su cuadrado es %d y su cubo es %d",161,raiz,cuad,cubo);
			}else{
				printf("Digite un valor entero positivo");
			}
			i=i+1;
		}
	}else{
		printf("Digite una cantidad positiva de datos");
	}
}
