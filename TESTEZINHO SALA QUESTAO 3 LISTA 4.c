#include<stdio.h>

main(){
	
	int i, n;
	float soma;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d", &n);
	
	soma = 0;
	
	for(i = 1; i <= n; i++){
		
		soma = soma + (1 / (float)i); /*divide e soma */
	}
	
	soma = soma + 1;
	
	printf("Soma de S = %.2f", soma);
}
