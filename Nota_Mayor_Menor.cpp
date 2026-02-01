#include <stdio.h>
main(){
	float corte,mayor=0,menor=5.1;
	int alumnos,i=1;
	printf("¿Cu%cntos alumnos hay en el curso? ",160);
	scanf("%d",&alumnos);
	for(i=1;i<=alumnos;i++){
		printf("Ingrese la nota del corte ");
		scanf("%f",&corte);
		if((corte>=0.0)&&(corte<=5.0)){
			if(corte>mayor){
				mayor=corte;
			}
			if(corte<menor){
				menor=corte;
			}
		}
	}
	printf("La nota mayor fue de %f y la nota menor fue de %f",mayor,menor);
}
