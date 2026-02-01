#include <stdio.h>
main(){
	float corte,minimo,sumaprobados=0,sumreprobados=0,promaprobados,promreprobados;
	int alumnos,i=1,aprobados=0,reprobados=0;
	printf("¿Cu%cntos alumnos hay en el curso? ",160);
	scanf("%d",&alumnos);
	printf("¿Cu%cl es la nota m%cnima para aprobar? ",160,161);
	scanf("%f",&minimo);
	for(i=1;i<=alumnos;i++){
		printf("Ingrese la nota del corte ");
		scanf("%f",&corte);
		if((corte>=0.0)&&(corte<=5.0)){
			if(corte<minimo){
				reprobados=reprobados+1;
				sumreprobados=sumreprobados+corte;
			}
			if(corte>=minimo){
				aprobados=aprobados+1;
				sumaprobados=sumaprobados+corte;
			}
		}
	}
	promaprobados=(sumaprobados/aprobados);
	promreprobados=(sumreprobados/reprobados);
	printf("Hay %d estudiantes aprobados, para un promedio de %f y hay %d estudiantes reprobados, para un promedio de %f",aprobados,promaprobados,reprobados,promreprobados);
}
