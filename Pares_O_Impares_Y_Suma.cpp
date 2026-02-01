#include <stdio.h>
main(){
    int lect=0,n=0,par=0,impar=0,sum=0;
    while (lect <= 9){
        printf("Digite un n%cmero",163);
        scanf("%d",&n);
        if (n%2 == 0){
            par=par+1;
        }
        else{
            impar=impar+1;
        }
        sum=sum+n;
        lect=lect+1;
    }
    printf("Hay %d n%cmeros pares, %d n%cmeros impares, y la suma de los n%cmeros es %d",par,163,impar,163,163,sum);
}                 
