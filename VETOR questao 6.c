/*Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica se algum
dos valores é igual a média dos mesmos.*/

#include<stdio.h>
#define N 10

main(){
	
	int i, vetor[N], posicao, cont = 0, media, soma = 0;
	
	for(i = 0; i < N; i++){
		
	printf("Digite a posicao %d do vetor: ",i);
	scanf("%d", &vetor[i]);
	
	soma = soma + vetor[i];
	
	}
	media = soma / N;
	
	for(i = 0; i < N; i++){
		
	if(vetor[i] == media){
	
	cont++;
	}
	
	}
	if(cont > 0){
	
	printf("\n%d valor e igual a media %d\n", cont, media);
	
	}else{
		
	printf("Nenhum sao igual!");
}
}
