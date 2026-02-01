#include <stdio.h>
main(){
	const float V_esc = 800000;
	float V_desc;
	int Unds;
	float V_final;
	printf("¿Cu%cntos escritorios va a comprar?",160);
	scanf("%d",&Unds);
	if(Unds<5){
		V_desc = 0.1;
	}
	if((Unds>=5)&&(Unds<10)){
		V_desc = 0.2;
	}
	if(Unds>=10){
		V_desc = 0.4;
	}
	V_final = ((V_esc*Unds) - ((V_esc*Unds)*V_desc));
	printf("El valor a pagar ser%c de %f",160,V_final);
}
