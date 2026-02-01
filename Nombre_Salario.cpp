#include <stdio.h>
main(){
	float Sal_H,Sal_Mes;
	unsigned H_Mes;
	char Nombre[75];
	
	printf("¿Cu%cl es tu nombre?",160);
	scanf("%s",Nombre);
	printf("¿Cu%cnto ganas por hora?",160);
	scanf("%f",& Sal_H);
	printf("¿Cu%cntas horas trabajaste en el mes?",160);
	scanf("%u",& H_Mes);
	Sal_Mes = Sal_H*H_Mes;
	if(Sal_Mes > 450000){
		printf("Hola %s Estas ganando %f al mes",Nombre,Sal_Mes);
	}else{
		printf("Hola %s",Nombre);
	}
	
	return 0;
}
