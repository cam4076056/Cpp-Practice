#include <stdio.h>
main(){
	int i,estudiantes,error=0;
	float nota,mayor=0.0,menor=5.1;
	printf("¿Cu%cntos estudiantes son? ",160);
	scanf("%d",&estudiantes);
	float notas[estudiantes];
	for(i=0;i<estudiantes;i++){
		if(error==0){
			printf("Digite el valor de la nota ");
			scanf("%f",&nota);
			if((nota>=0.0)&&(nota<=5.0)){
				notas[i]=nota;
				if(nota>mayor){
					mayor=nota;
				}
				if(nota<menor){
					menor=nota;
				}
			}else{
				printf("\n\nPor favor, ingrese un valor entre 0.0 y 5.0");
				error=error+1;
			}
		}
	}
	if(error==0){
		printf("Las notas ingresadas fueron\n\n");
		for(i=0;i<estudiantes;i++){
			printf("%f\n",notas[i]);
		}
		printf("\nLa nota mayor es de %f y la nota menor es de %f",mayor,menor);
	}
}
