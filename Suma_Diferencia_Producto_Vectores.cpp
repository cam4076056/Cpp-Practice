#include <stdio.h>
main(){
	int m,i;
	printf("¿Cu%cntos datos deben haber en cada grupo? ",160);
	scanf("%d",&m);
	int a[m];
	int b[m];
	printf("\n\nSe ingresar%cn los datos del primer grupo\n\n",160);
	for(i=0;i<m;i++){
		printf("Ingrese el n%cmero ",163);
		scanf("%d",&a[i]);
	}
	printf("\n\nSe ingresar%cn los datos del segundo grupo\n\n",160);
	for(i=0;i<m;i++){
		printf("Ingrese el n%cmero ",163);
		scanf("%d",&b[i]);
	}
	int suma[m],producto[m],diferencia[m];
	for(i=0;i<m;i++){
		suma[i]=a[i]+b[i];
		diferencia[i]=a[i]-b[i];
		producto[i]=a[i]*b[i];
	}
	printf("\n\nLos datos de ambos grupos son\n\n");
	for(i=0;i<m;i++){
		printf("%d  ",a[i]);
	}
	printf("\n\n");
	for(i=0;i<m;i++){
		printf("%d  ",b[i]);
	}
	printf("\n\nLa suma de cada posici%cn del primer grupo con el segundo es\n\n",162);
	for(i=0;i<m;i++){
		printf("%d  ",suma[i]);
	}
	printf("\n\nLa diferencia de cada posici%cn del primer grupo con el segundo es\n\n",162);
	for(i=0;i<m;i++){
		printf("%d  ",diferencia[i]);
	}
	printf("\n\nEl producto de cada posici%cn del primer grupo con el segundo es\n\n",162);
	for(i=0;i<m;i++){
		printf("%d  ",producto[i]);
	}
}
