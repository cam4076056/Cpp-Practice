#include <stdio.h>
main(){
	float x,y;
	printf("Digite respectivamente X y Y");
	scanf("%f %f",&x,&y);
	if(y==((3*x)+5) ){
		printf("La coordenada pertenece a la recta 3X+5");
	}else{
		printf("La coordenada no pertenece a la recta 3X+5");
	}
}
