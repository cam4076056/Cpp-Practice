#include <stdio.h>
#include <stdlib.h>
void notapersonal(float vector[23], float matriz[5][23],int dimx, int dimy){
	int x=0,y=0;
	for(y=0;y<dimy;y++){
		for(x=0;x<dimx;x++){
			if(matriz[x][y]>vector[y]){
				vector[y]=matriz[x][y];
			}
		}
	}
	printf("Las notas mayores de cada estudiante est%cn organizadas de la siguiente forma\n\n",160);
	for(y=0;y<dimy;y++){
		printf("Estudiante %d\n\n",(y+1));
		printf("%f\n\n",vector[y]);
	}
	system("pause");
	return;
}
void notageneral(float matriz[5][23],int dimx, int dimy, float max, float min){
	int x=0,y=0;
	for(y=0;y<dimy;y++){
		for(x=0;x<dimx;x++){
			if(matriz[x][y]>max){
				max=matriz[x][y];
			}
			if(matriz[x][y]<min){
				min=matriz[x][y];
			}
		}
	}
	printf("La nota mayor del curso fue %f y la nota menor del curso fue %f\n",max,min);
	system("pause");
	return;
}
void def(float matriz[5][23],float vector[23],int dimx, int dimy, float max, float min){
	int mejor,peor,x=0,y=0;
	float sum=0,prom=0;
	for(y=0;y<dimy;y++){
		for(x=0;x<1;x++){
			vector[y]=(0.1*(matriz[x][y]+matriz[x+1][y]))+(0.2*(matriz[x+2][y]+matriz[x+3][y]))+(0.4*matriz[x+4][y]);
		}
		if(vector[y]>max){
			max=vector[y];
			mejor=y;
		}
		if(vector[y]<min){
			min=vector[y];
			peor=y;
		}
		sum=sum+vector[y];
	}
	prom=(sum/dimy);
	printf("Las definitivas est%cn organizadas de la siguiente forma\n\n",160);
	for(y=0;y<dimy;y++){
		printf("Estudiante %d\n\n",(y+1));
		printf("%f\n\n",vector[y]);
	}
	system("pause");
	printf("El promedio del curso fue %f\n\n",prom);
	system("pause");
	printf("El estudiante con mayor definitiva fue el %d y el estudiante con menor definitiva fue el %d\n\n",(mejor+1),(peor+1));
	system("pause");
	return;
}
main(){
	float biologia[5][23];
	float definitiva[23];
	float defmayor=0,defmenor=5.1,notamayor[23],defprom=0,sumdef=0,notamay=0,notamen=5.1;
	int i,j,estudiantes=23,estmayor,estmenor,notas=5;
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
	def(biologia,definitiva,5,23,defmayor,defmenor);
	notapersonal(notamayor,biologia,5,23);
	notageneral(biologia,5,23,notamay,notamen);
}

