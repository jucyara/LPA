/*Implemente um programa que receba um nome completo e apresente apenas o último
nome e o 1º nome na seguinte forma: último, 1º nome Exemplo: Rafael Paes Olivera
saída: Oliveira, Rafael.*/

#include<stdio.h>
#include<string.h>

main(){
	
	char nome[400];
	int quantidade_espaco = 0, posicao_ultimo_espaco, i;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	/*sabendo quantos espaços eu tenho e a posição do último espaço*/
	
	for(i = 0; i < strlen(nome); i++){
		
		if(nome[i] == ' '){
		
		quantidade_espaco++;
		posicao_ultimo_espaco = i;	
		}
	}
	/*Imprimindo o último nome*/
	for(i = posicao_ultimo_espaco + 1; i < strlen(nome); i++){
		
		printf("%c", nome[i]);
	}
	printf(" ");
	
	/*Imprimindo o primeiro nome*/
	for(i = 0; i < strlen(nome); i++){
		
		if(nome[i] == ' '){
			
			break;
		}
		printf("%c", nome[i]);
	}
}
