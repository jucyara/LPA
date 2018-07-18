/*Calcular o valor da conta de energia elétrica de um consumidor, sendo informados: a leitura anterior (LANT),
a leitura atual (LATU) e valor por unidade consumida (V). Formúla: CONT = (LANT - LATU) * V. */

#include<stdio.h>

float leituraAnterior, leituraAtual, valorPorUnidadeCon, Cont;

main(){
	
	printf("Informe o valor da leitura anterior: ");
	scanf("%f", &leituraAnterior);
	
	printf("\nInforme o valor da leitura atual: ");
	scanf("%f", &leituraAtual);
	
	printf("\nInforme o valor de unidades por consumo: ");
	scanf("%f", &valorPorUnidadeCon);
	
	Cont = (leituraAnterior - leituraAtual) * valorPorUnidadeCon;
	
	printf("\nO valor da conta de energia eletrica e: R$%.2f", Cont);
}
