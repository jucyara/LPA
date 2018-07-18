/*Crie uma função que retorna três números como parâmetros, representando horas, minutos e segundos, 
e os converta em segundos.

EX: 2h 40 mim 10s = 9610s */

#include<stdio.h>

int somahoras(int a, int b, int c){
	
	int r;
	
	r = (a * 3600) + (b * 60) + c;
	
	return(r);
}

main(){
	
	int ho, mi, se, result;
	
	printf("\nHora: ");
	scanf("%i", &ho);
	
	printf("\nMinuto: ");
	scanf("%i", &mi);
	
	printf("\nSegundo: ");
	scanf("%i", &se);
	
	result = somahoras(ho,mi,se);
	
	printf ("\nTotal: %i segundos.\n", result);
}
