/*Entrar com o ano e informar se o mesmo é bissexto ou não.
Como funciona o ano bissexto ver opções abaixo na tabela:

1-Todo ano divisível por 4 é bissexto;
2-Todo ano divisível por 100 não é ano bissexto;
3-Mas se o ano for também divisível por 400 é ano bissexto. */

#include<stdio.h>

main(){
	
	int ano;
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(((ano % 4) == 0 && (ano % 100) != 0) || (ano % 400) == 0){
		
		printf("O ano de %d e bissexto!", ano);
	} else{
		printf("O ano de %d nao e bissexto!", ano);
	}
}
