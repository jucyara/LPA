/*Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa */


#include<stdio.h>

main(){
	
	int i, j, vetor[10];
	
	printf("Digite a sequencia do vetor:\n");
	scanf("%d", &vetor[i]);
	fflush(stdin);
	
	for(i = 0; i < 10; i++){
		
	scanf("%d", &vetor[i]);	
	}
		
	for(j = 9; j >= 0; j--){
		
	printf("\n%d\n ", vetor[j]);
	}
	
}
