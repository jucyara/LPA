/*Ler um vetor de 10 elementos inteiros. Ap�s isto, imprimir na tela os 10 valores lidos e o
usu�rio poder� escolher um destes valores para ser exclu�do do vetor. Ler o valor escolhido
e elimin�-lo do vetor.*/

#include<stdio.h>
#define N 10

main(){
	
	int i, vetor[N], numero; 
	
	for(i = 0; i < N; i++){
		
	printf("Digite a posicao %d do vetor: ",i);
	scanf("%d", &vetor[i]);
}

	printf("\nInforme um numero para excluir: ");
	scanf("%d", &numero);
	
	for(i = 0; i < N; i++){
		
	if(numero == vetor[i]){
			
	vetor[i] = 0;
	}		
}
for(i = 0; i < N; i++){
	
	printf("%d\n", vetor[i]);
}
}
