//Faça um cadastro de "N" pessoas com nome e idade coloque em registro. Exiba a média de idades,
//o nome em maiúculo da pessoa mais velha e sua idade, e da pessoa mais nova e sua idade.

#include<stdio.h>
#include<string.h>

main(){
	
	int saida, quantidade = 0, soma = 0, Maior, Menor;
	char pessoa_velha[100], pessoa_nova[100];
	
	typedef struct{ 
	char nome[100];
	int idade;
	float media;
	}Pessoas;
	
	Pessoas pessoa;
	
	do{
		printf("\n========== CADASTRO DE PESSOAS ==========\n");
		
	printf("\n\nInforme o nome: ");
	fflush(stdin);	
	gets(pessoa.nome);
	
	printf("Informe a idade: ");
	fflush(stdin);
	scanf("%i", &pessoa.idade);
	
	soma += pessoa.idade;
	
	if(pessoa.idade > Maior){
		
		Maior = pessoa.idade;
		strcpy(pessoa_velha, pessoa.nome);
	}
	if(pessoa.idade < Menor){
		
		Menor = pessoa.idade;
		strcpy(pessoa_nova, pessoa.nome);
	}
	quantidade++;
	
	printf("\nDeseja continuar? 1-sim ou 0-nao: ");
	fflush(stdin);
	scanf("%i", &saida);
		
	}while(saida > 0);
	
	pessoa.media = soma / quantidade;
	
	printf("\n\nA media das idades sera: %.2f\n", pessoa.media);
	printf("\nA pessoa mais velha e %s\n e sua idade e %i anos\n", strupr(pessoa_velha), Maior);
	printf("\nA pessoa mais nova e %s\n e sua idade e %i anos\n", strupr(pessoa_nova), Menor);
}
