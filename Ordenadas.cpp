#include <stdio.h>
main(){
	float a,b;
	printf("Digite los valores de las ordenadas");
	scanf("%f %f",&a,&b);
	if((a>=4)&&(a<=38)&&(b>=4)&&(b<=38)){
		printf("Los valores pertenecen al %crea",160);
	}else{
		printf("Los valores no pertenecen al %crea",160);
	}
return 0;
}
