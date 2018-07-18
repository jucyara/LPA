/*Faça um programa de uma agenda telefônica. Onde o usuário cadastra “n” nomes e telefones, só pare de cadastrar
quando digitar a palavra “sair”. 
Exiba:
* Todos os dados cadastrados (Nome e telefone)
- Nome em maiúscula;
- Quantidade de caracteres do nome;
- Numero do telefone.*/

#include<stdio.h>
#include<string.h>
#define N 100

char nome[N], telefone[N];
int size, opcao[N];
	
main(){
	int i;
	strcpy(opcao,"vazio");
	
	do{
	
	for(i = 0; i < N; i++){
		
	printf("\nEntre com um nome: ");
	gets(nome);
		
	printf("\nEntre com o telefone: ");
	gets(telefone);
	
	printf("\n===Listagem de dados===\n");
	
	strupr(nome);
	puts(nome);
	
	printf("Tamanho do Nome: ");
	printf("%d", strlen(nome));
	
	printf("\nTelefone: ");
	puts(telefone);
	
	puts("\nEscreva <sair> ");
	gets(opcao);
	}
	
	}while(strcmp(strupr(opcao),"sair") != 0);
}
