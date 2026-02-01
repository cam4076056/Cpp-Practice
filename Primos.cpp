#include <stdio.h>
main(){
	int i=1,num,datos,primo=0,critprimo=0,lprimo=1;
	printf("¿Cu%cntos n%cmeros son?",160,163);
	scanf("%d",&datos);
	for(i=1;i<=datos;i++){
		printf("Digite el valor del n%cmero",163);
		scanf("%d",&num);
		if(num>2){
			for(lprimo=1;lprimo<=(num-1);lprimo++){
				if(((num)%(lprimo))==0){
					critprimo=critprimo+1;
				}
			}
		}
		if(critprimo==1){
			primo=primo+1;
		}
		if((num==1)||(num==2)){
			primo=primo+1;
		}
		lprimo=1;
		critprimo=0;	
	}
	printf("La cantidad de n%cmeros primos ingresados es de %d",163,primo);
}
