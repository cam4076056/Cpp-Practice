#include <stdio.h>
main(){
	int i,estudiantes,error=0;
	float promedio,nota,sum=0;
	printf("¿Cu%cntos estudiantes son? ",160);
	scanf("%d",&estudiantes);
	float notas[estudiantes];
	for(i=0;i<estudiantes;i++){
		printf("Digite el valor de la nota ");
		scanf("%f",&nota);
		if((nota>=0.0)&&(nota<=5.0)){
			 notas[i]=nota;
			 sum=sum+nota;
		}
		else{
			printf("Ingrese un valor v%clido\n",160);
			error=error+1;
		}
	}
	if(error==0){
		printf("Las notas ingresadas fueron:\n\n");
		for(i=0;i<estudiantes;i++){
			printf("%f  \n",notas[i]);
		}
		promedio=(sum/estudiantes);
		printf("\nEl promedio del curso es de %f",promedio);
	}else{
		printf("\nHay al menos un valor no v%clido ingresado en las notas",160);
	}
}
