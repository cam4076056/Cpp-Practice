#include <stdio.h>
#include <math.h>
main(){
	int n,lect=0,sum,med=0,d,i=1,datos,p=1;
	printf("¿Cu%cntos datos son?",160);
	scanf("%d",&datos);
	lect=datos;
	while(i<=lect){
		printf("Digite el valor del dato");
		scanf("%d",&n);
		sum=sum+n;
		p=p*n;
		i=i+1;
	}
	med=(sum)/(datos);
	d=sqrt((med*((-(2*sum))+(datos*med)))+((pow(sum,2))-(2*p)));
	printf("La desviaci%cn de los datos es %d",162,d);
}
