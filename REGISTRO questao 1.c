/*1. Crie um programa que cadastre nome, idade ,sexo (M ou F) em uma estrutura pessoa e leia esses valores e exiba esses dados depois.*/

#include<stdio.h>
#include<string.h>

//definindo a estrutura pessoa, com as características nome, idade e sexo.
	typedef struct{
		char nome[40];
		char sexo;
		int idade;
	}Pessoa;

main(){
	Pessoa pessoa; //chamando a estrutura
	
	puts("Informe seu nome: ");
	gets(pessoa.nome);
	
	printf("Informe sua idade: ");
	scanf("%i", &pessoa.idade);
	
	printf("Informe seu sexo m-masculino/ f-feminino: ");
	scanf(" %c", &pessoa.sexo);
	
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %i\n", pessoa.idade);
	
	if(pessoa.sexo == 'm'){
		
		printf("Sexo: Masculino");
	}else{
		printf("Sexo: Feminino");
	}
}

