/*Fazer um programa em "C" que pergunta o nome, o endereço, o telefone e a idade de
uma pessoa e monta um string com a seguinte frase: "Seu nome é ..., você tem ...
anos, mora na rua ... e seu telefone é ... ."*/

#include<stdio.h>
#include<string.h>

main(){
	
	char nome[100], endereco[100], telefone[30], idade[10];
	
	printf("Qual o seu nome?: ");
	gets(nome);
	
	printf("\nQual o seu endereco?: ");
	gets(endereco);
	
	printf("\nQual o seu numero de telefone?: ");
	gets(telefone);
	
	printf("\nQual a sua idade?: ");
	gets(idade);
	
	printf("\n===Listagem de dados===\n");
	
	printf("Seu Nome e: ");
	puts(nome);
	
	printf("Voce tem ");
	puts(idade);
	
	printf("Mora na rua: ");
	puts(endereco);
	
	printf("E Seu Telefone e: ");
	puts(telefone);
	
}
	
