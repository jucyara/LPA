/*6. Escreva um programa que simule contas bancarias
Åú Ao iniciar o programa vamos criar contas bancarias para 5 clientes.
Åõ Cada conta tera o nome e o CPF do cliente associado a ela.
Åõ No ato da criacao da conta o cliente precisara fazer um deposito inicial.

Åú Apos as contas serem criadas, o sistema devera possibilitar realizacoes de saques ou depositos nas contas, perguntando primeiro o numero da
conta e depois a operacao 1 para saques ou 2 depositos .
Åõ Sempre que uma operacao de saque ou deposito seja realizada, o sistema devera imprimir o nome do titular e o saldo final da conta e
perguntar se deseja sair do programa.*/

#include<stdio.h>
#include<string.h>

typedef struct{
	char nome[40];
	char cpf[40];
	int valor;
}Conta_Bancaria;

main(){
	int i, x, cod, valor, operacao;
	
	Conta_Bancaria cliente[5];
	
	//Cadastrando a conta
	for(i = 0; i < 5; i++){
		
		printf("Nome? ");
		fflush(stdin);
		gets(cliente[i].nome);
		
		printf("\nCPF? ");
		fflush(stdin);
		gets(cliente[i].cpf);
		
		printf("\nValor do deposito inicial? ");
		fflush(stdin);
		scanf("%i", &cliente[i].valor);
	}
	//O cÛdigo da conta È a ordem que foi cadastrada
	for(x = 0; x < 5; x++){
		
		
		printf("\nNumero da conta? ");
		scanf("%i", &cod);
		
		
		printf("\n1-Saques\n");
		printf("\n2-Depositos\n");
		
		printf("\nQual operacao a ser feita? ");
		fflush(stdin);
		scanf("%i", &operacao);
		
		switch(operacao){
			
			case 1: //retirar
			
			printf("\nDeseja retirar quanto? ");
			fflush(stdin);
			scanf("%i", &valor);
			
			cliente[cod].valor -= valor;
			
			printf("\nNome do titular da conta: %s\n", cliente[cod].nome);
			printf("\nValor: %i\n", cliente[cod].valor);
			break;
			
			case 2: //colocar
			
			printf("\nDeseja depositar quanto? ");
			fflush(stdin);
			scanf("%i", &valor);
			
			cliente[cod].valor += valor;
			
			printf("\nNome do titular da conta: %s\n", cliente[cod].nome);
			printf("\nValor: %i\n", cliente[cod].valor);
			break;
			
		   default: printf("Error");
		   break;
		}
		printf("\nDeseja sair 1-sim 0-nao? ");
		fflush(stdin);
		scanf("%i", &cod);
		
		if(cod == 1){
			break;
		}
	}
}
