/*Entrar com o ano e informar se o mesmo � bissexto ou n�o.
Como funciona o ano bissexto ver op��es abaixo na tabela:

1-Todo ano divis�vel por 4 � bissexto;
2-Todo ano divis�vel por 100 n�o � ano bissexto;
3-Mas se o ano for tamb�m divis�vel por 400 � ano bissexto. */

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
