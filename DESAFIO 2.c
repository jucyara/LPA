/*Digite �n� n�meros em vetor e exiba quais n�meros foram digitados e quantos foram
digitados. Qual o elemento da terceira posi��o e da �ltima posi��o.*/

#include<stdio.h>
#define MAX 100

main(){
	
	int i, n, vetor[MAX];
	
	while(n != 0){
	
	printf("\n---------------------");
	printf("\nInforme o comprimento da sequencia: ");
	scanf("%d", &n);
	
	printf("\nDigite uma sequencia com %d numeros inteiros: ", n);
	
	for(i=0; i < n; i++){
		
	scanf("%d", &vetor[i]);
	}
	printf("\nQuantos elementos foram digitados: %d", n);
	printf("\nQual o elemento da terceira posicao: %d", vetor[2]);
	printf("\nQual o elemento da ultima posicao: %d", vetor[n-1]);
	
	}
}
