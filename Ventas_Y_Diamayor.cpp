#include <stdio.h>
main(){
	int semana[7];
	int dias=7;
	int i=0,mayor=0,sumventas=0,diamayor;
	printf("Se iniciar%c ingresando las ventas desde el lunes hasta el domingo\n\n",160);
	for(i=0;i<dias;i++){
		printf("¿Cu%cntas ventas se realizaron el dia %d de la semana? ",160,(i+1));
		do{
			scanf("%d",&semana[i]);
		}while(semana[i]<=0);
		sumventas=sumventas+semana[i];
	}
	for(i=0;i<dias;i++){
		if(semana[i]>mayor){
			mayor=semana[i];
			diamayor=i;
		}
	}
	printf("\n\nLas ventas en la semana para cada d%ca son las siguientes\n\n",161);
	for(i=0;i<dias;i++){
		printf("%d  ",semana[i]);
	}
	printf("\n\nEl total de ventas en la semana fue de %d y el d%ca con mas ventas fue el d%ca %d\n\n",sumventas,161,161,diamayor+1);
}
