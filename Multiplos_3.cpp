#include <stdio.h>
main(){
	int datos;
	printf("¿Cu%cntos n%cmeros son? ",160,163);
	scanf("%d",&datos);
	int vector[datos];
	int i,multiplo3=0;
	for(i=0;i<datos;i++){
		printf("Digite el n%cmero ",163);
		scanf("%d",&vector[i]);
		if(vector[i]%3 ==0){
			multiplo3=multiplo3+1;
		}
	}
	int pos[multiplo3];
	printf("Los datos en el vector son\n\n");
	for(i=0;i<datos;i++){
		printf("%d  ",vector[i]);
	}
	int j=0;
	for(i=0;i<datos;i++){
		if(vector[i]%3==0){
			if(j<multiplo3){
				pos[j]=i;
				j=j+1;
			}
		}
	}
	if(multiplo3!=0){
		printf("\n\nHay %d m%cltiplos de 3 y estan en las posiciones\n\n",multiplo3,163);
	    for(j=0;j<multiplo3;j++){
		    printf("%d  ",pos[j]);	
	    }
    }
}
