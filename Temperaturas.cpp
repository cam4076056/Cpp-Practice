//Tema B//
//Se toman los datos de las temperaturas del mes de Marzo, se desea://
//B.Saber el promedio de las temperaturas de los días pares del mes de marzo, diga cuál fue el día de mayor temperatura//
#include <stdio.h>
main(){
	int dias=31;
	int diaspares=15;
	float marzo[dias];
	int i,diamayor;
	float temp,mayor=0,sumpar=0,promediopar=0;
	for(i=0;i<dias;i++){
		printf("Ingrese el valor de la temperatura del d%ca %d en grados Celsius ",161,i+1);
		scanf("%f",&marzo[i]);
		if(i%2==0){
			sumpar=sumpar+marzo[i];
		}
		if(marzo[i]>mayor){
			mayor=marzo[i];
			diamayor=i;
		}
	}
	printf("Se tienen las siguientes temperaturas:\n\n");
	for(i=0;i<dias;i++){
		printf("%d de Marzo:%f\n",(i+1),marzo[i]);
	}
	promediopar=(sumpar/diaspares);
	printf("\nEl promedio de los d%cas pares fue de %f\n\n",161,promediopar);
	printf("El d%ca con mayor temperatura fue el dia %d",161,(diamayor+1));	
}
