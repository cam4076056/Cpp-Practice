#include <stdio.h>
main(){
	int m=0,i;
	printf("¿Cu%cntos datos son? ",160);
	do{
		scanf("%d",&m);
	}while(m<=0);
	int b[m];
	for(i=0;i<m;i++){
		printf("Ingrese el valor del n%cmero ",163);
		scanf("%d",&b[i]);
	}
	int clave;
	printf("¿Cu%cl es la clave? ",160);
	scanf("%d",&clave);
	for(i=0;i<m;i++){
		if(b[i]==clave){
			printf("La clave se encuentra en la posici%cn %d",162,i);
		}
	}
}
