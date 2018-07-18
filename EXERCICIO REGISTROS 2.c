//Faça um cadastro de "N" pessoas em uma agenda telefônica (nome e telefone) em vetor de registro e quando for
//digitado o nome da pessoa, devolva o telefone solicitado. Faça um menu para cadastrar e consultar.

#include<stdio.h>
#include<string.h>
#define N 2

typedef struct{ 
	char nome[N], 
	telefone[N];
}Agenda;
	
main(){ 

	int i, opcao = 1;
	char nome[N];
	
	Agenda agenda[N];
	
	while(opcao != 0){
			
		printf("\n\n====== MENU DA AGENDA TELEFONICA ======\n");
		printf("\n1-Cadastar\n");
		printf("\n2-Consultar\n");
		printf("\n0-Sair");
		
		printf("\n\nDigite a opcao desejada: ");
		fflush(stdin);
		scanf("%i", &opcao);
		
		switch(opcao){
			
			case 1: 
			system("cls");
			printf("\n====== CADASTRAR ======\n");
			
			for(i = 0; i < N; i++){
			
				printf("\nCadastre o nome: ");
				fflush(stdin);
				scanf("%s", &agenda[i].nome);
			
				printf("\nCadastre o telefone: ");
				fflush(stdin);
				scanf("%s", &agenda[i].telefone);
			}
			break;
			
			case 2:
				
				system("cls");
				printf("\n====== CONSULTAR CONTATO ======\n");
					
				printf("\nEntre com o nome do contato: ");
				fflush(stdin);
				scanf("%s", &nome);
				
				for(i = 0; i < N; i++){
				
					if(strcmp(agenda[i].nome,nome) == 0){
							
					printf("\nNome: %s\n Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
					}
				}
				
			break;
			
			case 0: 
				system("cls");
				printf("Cadastro encerrado!");
			break;
			
			default: 
				system("cls");
				printf("Informe uma opcao valida!");
			break;
		}

	}
}
