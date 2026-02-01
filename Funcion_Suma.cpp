#include <stdio.h>
#include <stdlib.h>
float sumar(float x, float y);
int main(){
	float valor1,valor2;
	printf("Ingresa el primer valor: ");
	scanf("%f",&valor1);
	printf("Ingresa el segundo valor: ");
	scanf("%f",&valor2);
	printf("La suma es: %f\n",sumar(valor1,valor2));
	system("pause");
	return 0;
}
float sumar(float x, float y){
	return x+y;
}
