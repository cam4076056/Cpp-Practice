#include <stdio.h>
main(){
	int m,n,i,j,k=0;
	printf("¿Cu%cntos estudiantes perdieron COMPUTADORAS? ",160);
	scanf("%d",&m);
	int computadoras[m];
	printf("¿Cu%cntos estudiantes perdieron ALGORITMOS? ",160);
	scanf("%d",&n);
	int algoritmos[n];
	printf("\n\nIngrese los c%cdigos para COMPUTADORAS\n\n",162);
	for(i=0;i<m;i++){
		printf("Digite el c%cdigo ",162);
		scanf("%d",&computadoras[i]);
	}
	printf("\n\nIngrese los c%cdigos para ALGORITMOS\n\n",162);
	for(j=0;j<n;j++){
		printf("Digite el c%cdigo ",162);
		scanf("%d",&algoritmos[j]);
	}
	int cache=0;
	for(i=0;i<(m-1);i++){
		for(i=0;i<(m-1);i++){
			if(computadoras[i]>computadoras[i+1]){
				cache=computadoras[i];
				computadoras[i]=computadoras[i+1];
				computadoras[i+1]=cache;
			}
		}
	}
	for(j=0;j<(n-1);j++){
		for(j=0;j<(n-1);j++){
			if(algoritmos[j]>algoritmos[j+1]){
				cache=algoritmos[j];
				algoritmos[j]=algoritmos[j+1];
				algoritmos[j+1]=cache;
			}
		}
	}
	int menor;
	if(m>n){
		menor=n;
	}
	if(n>m){
		menor=m;
	}
	if(n==m){
		menor=m;
	}
	int cya[menor];
	for(i=0;i<menor;i++){
		if(computadoras[i]==algoritmos[i]){
			cya[k]=computadoras[i];
			k=k+1;
		}
	}
	printf("\n\nEstudiantes que perdieron COMPUTADORAS\n\n");
	for(i=0;i<m;i++){
		printf("%d  ",computadoras[i]);
	}
	printf("\n\nEstudiantes que perdieron ALGORITMOS\n\n");
	for(j=0;j<n;j++){
		printf("%d  ",algoritmos[j]);
	}
	printf("\n\nEstudiantes que perdieron ambas materias\n\n");
	for(k=0;k<menor;k++){
		printf("%d  ",cya[k]);
	}
	
}
