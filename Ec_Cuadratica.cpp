#include <stdio.h>
#include <math.h>
main(){
int A,B,C;
float Disc,Sol_A,Sol_B;
printf("Digite los valores de A,B Y C");
scanf("%d %d %d",&A,&B,&C);
Disc = (pow(B,2) - (4*A*C));
if(Disc>0){
	Sol_A = ((-B + sqrt(Disc))/(2*A));
	Sol_B = ((-B - sqrt(Disc))/(2*A));
	printf("Las soluciones de la ecuacion son %g y %g",Sol_A,Sol_B);
}else{
	if(Disc=0){
		Sol_A = ((-B)/(2*A));
		printf("La soluci%cn de la ecuacion es %g",162,Sol_A);
	}
	else{
		printf("La ecuaci%cn no tiene soluci%cn en los reales",162,162);
	}
}

return 0;

}


