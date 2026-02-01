#include <stdio.h>
int main(){
	unsigned n=0,i=1,a=1,b=1,f=1;
	printf("Digite el valor mayor o igual a 7");
	scanf("%u",&n);
	if(n>=7){
		printf("%u ",a);
		while(i<=n){
			printf("%u ",f);
			f=a+b;
			a=b;
			b=f;
			i=i+1;
		}	
	}else{
		printf("El valor ingresado no es mayor o igual a 7");
	}
}
