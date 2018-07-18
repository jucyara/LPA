/*Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos
alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.*/

#include<stdio.h>
#define N 3

main(){
	
	int i, quantidade = 0, idade[N];
	float media, altura[N], soma = 0;
	
	for(i = 0; i < 3; i++){
		
	printf("\nInforme sua idade: ");
	scanf("%d", &idade[i]);
	
	printf("\nDigite sua altura: ");
	scanf("%f", &altura[i]);

	soma += altura[i];
	}
	media = soma / N;
	
	for(i = 0; i < 3; i++){			
		
	if((idade[i] > 13) && (altura[i] < media)){
		
	quantidade ++;
	}
		
	}
	printf("\nA soma sera: %.2f", soma);
	printf("\nA quantidade sera: %d", quantidade);
	printf("\nA media sera: %.2f", media);
	}
