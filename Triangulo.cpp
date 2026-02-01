#include <stdio.h>
#include <math.h>
main(){
	float S,Area_t,L1,L2,L3;
	printf("Ingrese los lados del triangulo");
	scanf("%f %f %f",&L1,&L2,&L3);
	S = (L1+L2+L3)/2;
	Area_t = sqrt(S*(S-L1)*(S-L2)*(S-L3));
	if((L1==0)||(L2==0)||(L3==0)){
		printf("No se forma triangulo");
	}else{
		if((L1==L2)&&(L2==L3)&&(L1==L3)){
			printf("El triangulo es equilatero");
			printf("El area del triangulo es %f",Area_t);
		}else{
			if((L1==L2)||(L2==L3)||(L1==L3)){
				printf("El triangulo es isosceles");
				printf("El area del triangulo es %f",Area_t);
			}
		}
		if((L1!=L2)&&(L2!=L3)&&(L3!=L1)){
			printf("El triangulo es escaleno");
			printf("El area del triangulo es %f",Area_t);
		}
	}
return 0;	
}
