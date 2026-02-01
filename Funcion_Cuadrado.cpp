#include <stdio.h>
#include <stdlib.h>
void funcion_cuadrado(int valor){
	int res = (valor*valor);
	printf("El cuadrado de %d es %d\n",valor,res);
	return;
}
int main(){
	int numero;
	printf("Ingresa un n%cmero: ",163);
	scanf("%d",&numero);
	funcion_cuadrado(numero);
	system("pause");
	return 0;
}
