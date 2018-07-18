/*Faça um Programa que leia 4 notas, mostre as notas e a média na tela.*/

#include<stdio.h>
#define N 4

main(){
	
	int i;
	float media = 0, notas[N];
	
	for(i = 0; i < N; i++){
		
	printf("Informe a nota do aluno %d: ", i);
	scanf("%f", &notas[i]);
	
	media = media + notas[i];
	
	}
	media = media / N;
	
	printf("A media das notas sera: %.2f", media);
}
