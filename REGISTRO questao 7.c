/*7. Crie um programa que tenha um menu com as seguintes opcoes
Åú 1 - Cadastrar
Åú 2 - Editar
Åú 3 - Imprimir
Åú 4 - Sair
Cadastrar - ira cadastrar em uma estrutura cliente tera cod(sera a ordem de cadastro), nome, idade,cpf,sexo,endereco.
Editar - edite passando a posicao de ordem do cliente e edite todos os campos.
Imprimir - exiba todos os clientes na tela.
Sair - O programa e encerrado.
No fim de cada opcao, deve voltar ao menu de opcoes.*/

#include<stdio.h>
#include<string.h>

typedef struct{
	char nome[40];
	char cpf[40];
	char sexo[40];
	char endereco[40];
	int idade;
}Pessoas;

main(){
	
	Pessoas pessoa[100];
	int i;
	int x = 0;
	
while(2){
	
	int op = 0;
	
	printf("\n========== MENU ==========\n");
	printf("\n1-Cadastrar\n");
	printf("\n2-Editar\n");
	printf("\n3-Imprimir\n");
	printf("\n4-Sair\n");
	
	printf("\nInforme sua opcao: ");
	scanf("%i", &op);
	
	switch(op){
		
		while(2){
		
		case 1: //Cadastrar
			
		printf("\nNome: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].nome);
		
		printf("\nIdade: ");
		fflush(stdin);
		scanf("%i", &pessoa[i].idade);
		
		printf("\nCPF: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].cpf);
		
		printf("\nSexo: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].sexo);
		
		printf("\nEndereco: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].endereco);
		
		x++;
		
		printf("\nDeseja continuar 1-sim / 2-nao: ");
		fflush(stdin);
		scanf("%i", &i);
		
		if(i == 1){
			
		i = 0;
			break;
	}	
			
		}
		break;
		
		case 2: //Editar
		
		printf("Que cliente deseja editar? ");
		scanf("%i", &i);
		
		printf("\nNome: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].nome);
		
		printf("\nIdade: ");
		fflush(stdin);
		scanf("%i", &pessoa[i].idade);
		
		printf("\nCPF: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].cpf);
		
		printf("\nSexo: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].sexo);
		
		printf("\nEndereco: ");
		fflush(stdin);
		scanf("%s", &pessoa[i].endereco);
		
		break;
		
		case 3: //Imprimir
		
		if(x == 0){
			
			printf("Erro voce nao cadastrou nada!");
		}
		int y;
		
		for(y = 0; y >= 0; y--){
			
		printf("\nNome: ");
		printf("\nIdade: ");
		printf("\nCPF: ");
		printf("\nSexo: ");
		printf("\nEndereco: ");	
		}
		break;
		
		case 4: printf("\n</END>\n");
		break;
		
		default:
			break;
	}
	if(op == 4){
		
		break;
	}
}	
	
	
}
