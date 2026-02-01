#include <stdio.h>
main(){
	int A,B,C,D,V_mayor,V_menor,Sum;
	printf("Digite los valores de A,B,C y D");
	scanf("%d %d %d %d",&A,&B,&C,&D);
	if((A!=B)&&(B!=C)&&(C!=D)&&(A!=C)&&(A!=D)&&(B!=D)){
		if((A>B)&&(A>C)&&(A>D)){
			V_mayor = A;
		}else{
			if((A<B)&&(A<C)&&(A<D)){
				V_menor = A;
			}
		}
		if((B>A)&&(B>C)&&(B>D)){
			V_mayor = B;
		}else{
			if((B<A)&&(B<C)&&(B<D)){
				V_menor = B;
			}
		}
		if((C>A)&&(C>B)&&(C>D)){
			V_mayor = C;
		}else{
			if((C<A)&&(C<B)&&(C<D)){
				V_menor = C;
			}
		}
		if((D>A)&&(D>B)&&(D>C)){
			V_mayor = D;
		}else{
			V_menor = D;
		}
	}
	else{
		if((A==B)&&(B==C)&&(C==D)&&(D==A)&&(D==B)&&(A==C)){
			V_mayor = A;
			V_menor = B;
		}else{
			if((A>=B)&&(A>=C)&&(A>=D)){
				V_mayor = A;
			}else{
				if((A<=B)&&(A<=C)&&(A<=D)){
					V_menor = A;
				}
			}
			if((B>=A)&&(B>=C)&&(B>=D)){
				V_mayor = B;
			}else{
				if((B<=A)&&(B<=C)&&(B<=D)){
					V_menor = B;
				}
			}
			if((C>=A)&&(C>=B)&&(C>=D)){
				V_mayor = C;
			}else{
				if((C<=A)&&(C<=B)&&(C<=D)){
					V_menor = C;
				}
			}
			if((D>=A)&&(D>=B)&&(D>=C)){
				V_mayor = D;
			}else{
				V_menor = D;
			}
		}
	}
	Sum = V_mayor + V_menor;
	printf("El resultado de la suma es %d",Sum);
return 0;
}
