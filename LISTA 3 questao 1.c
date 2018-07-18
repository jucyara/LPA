/*Escreva um programa que apresente o menu de opções abaixo:

OPÇÕES:

1-SAUDAÇÃO
2-BRONCA
3-FELICITAÇÃO
0-FIM
	O programa deve exibir, para cada opção, a respectiva mensagem:
	
1-Olá. Como vai?
2-Vamos estudar mais.
3-Meus parabéns!
0-Fim de serviço. */ 

#include<stdio.h>

int opcoes;

main(){
	
	printf("1-SAUDACAO\n");
	printf("2-BRONCA\n");
	printf("3-FELICITACAO\n");
	printf("0-FIM\n");
	scanf("%d", &opcoes);
	
	printf("Informe sua opcao: ");
	switch(opcoes){
		
		case 1: printf("Ola. Como vai?");
		break;
		
		case 2: printf("Vamos estudar mais!");
		break;
		
		case 3: printf("Meus parabéns!");
		break;
		
		case 0: printf("Fim de servico!!");
		break;
		
		default: printf("OPCAO INVALIDA! TENTE NOVAMENTE.");
	}
}
