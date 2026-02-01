#include <stdio.h>
main(){
	int i=1,num,datos,positivo=0,negativo=0,sumpos,sumneg;
	float prompos=0,promneg=0;
	printf("¿Cu%cntos n%cmeros son?",160,163);
	scanf("%d",&datos);
	for(i=1;i<=datos;i++){
		printf("Digite el valor del n%cmero",163);
		scanf("%d",&num);
		if(num<0){
			negativo=negativo+1;
			sumneg=sumneg+num;
		}
		if(num>0){
			positivo=positivo+1;
			sumpos=sumpos+num;
		}
	}
	prompos=((sumpos)/(positivo));
	promneg=((sumneg)/(negativo));
	printf("El promedio de los n%cmeros positivos es de %f y el de los n%cmeros negativos es de %f",163,prompos,163,promneg);
}
