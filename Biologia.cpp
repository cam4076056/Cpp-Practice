#include <stdio.h>
#include <stdlib.h>
main(){
	float biologia[5][23];
	float definitiva[23];
	float defmayor=0,defmenor=5.1,notamayor[23],defprom=0,sumdef=0,notamay=0,notamen=5.1;
	int i,j,estudiantes=23,estmayor,estmenor;
	for(i=0;i<5;i++){
		for(j=0;j<23;j++){
			biologia[i][j]=0;
		}
	}
	for(j=0;j<23;j++){
		for(i=0;i<5;i++){
			printf("Digite la nota %d del estudiante %d ",(i+1),(j+1));
			scanf("%f",&biologia[i][j]);
			while((biologia[i][j])<0||(biologia[i][j])>5){
				printf("Digite la nota de nuevo ");
				scanf("%f",&biologia[i][j]);
			}
		}
	}
	for(i=0;i<23;i++){
		notamayor[i]=0;
	}
	for(j=0;j<23;j++){
		for(i=0;i<5;i++){
			if(biologia[i][j]>notamayor[j]){
				notamayor[j]=biologia[i][j];
			}
		}
	}
	for(j=0;j<23;j++){
		for(i=0;i<5;i++){
			if(biologia[i][j]>notamay){
				notamay=biologia[i][j];
			}
			if(biologia[i][j]<notamen){
				notamen=biologia[i][j];
			}
		}
	}
	for(j=0;j<23;j++){
		for(i=0;i<1;i++){
			definitiva[j]=(0.1*(biologia[i][j]+biologia[i+1][j]))+(0.2*(biologia[i+2][j]+biologia[i+3][j]))+(0.4*biologia[i+4][j]);
		}
		if(definitiva[j]>defmayor){
			defmayor=definitiva[j];
			estmayor=j;
		}
		if(definitiva[j]<defmenor){
			defmenor=definitiva[j];
			estmenor=j;
		}
		sumdef=sumdef+definitiva[j];
	}
	defprom=(sumdef/estudiantes);
	printf("Las notas de los estudiantes est%cn organizadas de la siguiente forma\n\n",160);
	for(j=0;j<23;j++){
		printf("Estudiante %d\n\n",(j+1));
		for(i=0;i<5;i++){
			printf("%f  ",biologia[i][j]);
			if(i==4){
				printf("\n\n");
			}
		}
	}
	system("pause");
	printf("Las definitivas est%cn organizadas de la siguiente forma\n\n",160);
	for(j=0;j<23;j++){
		printf("Estudiante %d\n\n",(j+1));
		printf("%f\n\n",definitiva[j]);
	}
	system("pause");
	printf("Las notas mayores de cada estudiante est%cn organizadas de la siguiente forma\n\n",160);
	for(j=0;j<23;j++){
		printf("Estudiante %d\n\n",(j+1));
		printf("%f\n\n",notamayor[j]);
	}
	system("pause");
	printf("El promedio del curso fue %f\n\n",defprom);
	system("pause");
	printf("El estudiante con mayor definitiva fue el %d y el estudiante con menor definitiva fue el %d\n\n",(estmayor+1),(estmenor+1));
	system("pause");
	printf("La nota mayor del curso fue %f y la nota menor del curso fue %f",notamay,notamen);
}
