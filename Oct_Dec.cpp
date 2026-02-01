#include <stdio.h>
#include <math.h>
main(){
	int D1,D2,D3,D4,D5,Dec;
	unsigned Caso;
	printf("Digite por separado los cinco d%cgitos",161);
	scanf("%d %d %d %d %d",&D1,&D2,&D3,&D4,&D5);
	printf("Si el n%cmero es positivo digite 0, si es negativo digite 1",163);
	scanf("%u",&Caso);
	if(Caso = 0){
		Dec = ((D1*pow(8,4))+(D2*pow(8,3))+(D3*pow(8,2))+(D4*8)+D5);
		printf("El resultado en notacion decimal es %d",Dec);
	}else{
		if(Caso = 1){
			Dec = -((D1*pow(8,4))+(D2*pow(8,3))+(D3*pow(8,2))+(D4*8)+D5);
			printf("El resultado en notacion decimal es %d",Dec);
		}
	}
	return 0;
}
