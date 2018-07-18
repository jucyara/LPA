#include<stdio.h>

main(){
	
	
	int i, n;
	float x;
	float soma;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d", &n);
	
	/* se o numero que for digitado for negativo, transformamos em positivo */
	
	if(n < 0){
		
		printf("Seu numero foi transformado em positivo");
		n *= -1;
	}
	
	for(i = 2; i <= n; i++){
		/*float - estou forçando o C a transformar o i em float */
		soma = soma + (1.0 / (float)i); /*divide e soma */
	}
	
	soma = soma + 1.0;
	
	printf("Soma de S = %f", soma);
}
