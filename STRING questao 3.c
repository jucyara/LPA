/*Implemente um programa que receba um nome completo e apresente apenas o �ltimo
nome e o 1� nome na seguinte forma: �ltimo, 1� nome Exemplo: Rafael Paes Olivera
sa�da: Oliveira, Rafael.*/

#include<stdio.h>
#include<string.h>

main(){
	
	char nome[400];
	int quantidade_espaco = 0, posicao_ultimo_espaco, i;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	/*sabendo quantos espa�os eu tenho e a posi��o do �ltimo espa�o*/
	
	for(i = 0; i < strlen(nome); i++){
		
		if(nome[i] == ' '){
		
		quantidade_espaco++;
		posicao_ultimo_espaco = i;	
		}
	}
	/*Imprimindo o �ltimo nome*/
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
