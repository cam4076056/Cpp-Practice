#include <stdio.h>
main(){
	int i,estudiantes,error=0,aprobados=0,reprobados=0,regular=0;
	float const minimo=3.0;
	float nota;
	printf("¿Cu%cntos estudiantes son? ",160);
	scanf("%d",&estudiantes);
	float notas[estudiantes];
	for(i=0;i<estudiantes;i++){
		if(error==0){
			printf("Digite el valor de la nota ");
			scanf("%f",&nota);
			if((nota>=0.0)&&(nota<=5.0)){
				notas[i]=nota;
				if(nota<minimo){
					reprobados=reprobados+1;
				}
				if(nota>=minimo){
					aprobados=aprobados+1;
					if(nota==minimo){
						regular=regular+1;
					}
				}
			}
			else{
				printf("\n\nPor favor ingrese un valor entre 0.0 y 5.0");
				error=error+1;
			}
		}
	}
	if(error==0){
		printf("Las notas ingresadas fueron\n\n");
		for(i=0;i<estudiantes;i++){
			printf("%f\n",notas[i]);
		}
		printf("\n%d Estudiante/s aprobaron, %d Estudiante/s reprobaron y %d Estudiante/s tiene/n una nota de 3.0",aprobados,reprobados,regular);
	}
}
