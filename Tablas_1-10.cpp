#include <stdio.h>
main(){
	unsigned const b=10;
	unsigned a=1,base=1,producto=0;
	for(a=1;a<=b;a++){
		while(base<=10){
			producto=(a*base);
			printf("%u*%u=%u\n",a,base,producto);
			base=base+1;
	    }
		base=1;
	}
}
