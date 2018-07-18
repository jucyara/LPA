/*Ler um vetor W de 10 elementos, depois ler um valor V. Contar e escrever quantas vezes o
valor V ocorre no vetor W e escrever também em que posições (índices) do vetor W o
valor V aparece. Caso o valor V não ocorra nenhuma vez no vetor W, escrever uma
mensagem informando isto.*/

#include<stdio.h>

main(){
	
	int vetorW[10], valor, i, cont = 0, pos[10];
	
	for(i = 0; i < 10; i++){
		
	printf("Digite a posicao %d do valor de W: ",i);
	scanf("%d", &vetorW[i]);
	}
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &valor);
	
	for(i = 0; i < 10; i++){
		
	if(vetorW[i] == valor){
		
	pos[cont++] = i;
	}
}
printf("\nO valor aparece: %d vezes no vetor\nNas posicoes: ", cont);

for (i = 0;i < cont; i++){
	
	printf("%d", pos[i]+1);
} 
}
