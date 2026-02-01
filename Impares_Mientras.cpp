#include <stdio.h>
main(){
	int contador=1,numero=0;
	while(contador<=15){
		printf("Digite el n%cmero",163);
		scanf("%d",&numero);
		if((numero%2)==1){
			printf("%d\n",numero);
		}
		contador=contador+1;
	}
}
