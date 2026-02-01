#include <stdio.h>
main(){
	int i=0,j=0,k=0,l=0;
	int Primos[17];
	for(i=0;i<17;i++){
		Primos[i]=0;
	}
	for(i=2;i<=64;i++){
		k=0;
		for(j=i;j>=2;j--){
			if(j<i){
				if((i%j)==0){
					k=1;
				}
			}
		}
		if((k==0)&&(l<17){
			Primos[l]=i;
			l=l+1;
		}
	}
	for(i=0;i<17;i++){
		printf("%d\n",Primos[i]);
	}
}
