/*Escreva um programa para calcular e imprimir o numero de lâmpadas necessárias para iluminar um determinado cômodo de uma
residência. Dados de entrada: potência da lâmpada utilizada (em watts), dimensões (largura e comprimento, em metros) do
cômodo. Considere que a potência necessária é de 18 watts por metro quadrado. */

#include<stdio.h>

float potenciaLampada, larguraComodo, comprimentoComodo, numeroLampadas;

main(){
	
	printf("Informe a potencia da lampada em Watts: ");
	scanf("%f", &potenciaLampada);
	
	printf("Informe a largura do comodo em Metros: ");
	scanf("%f", &larguraComodo);
	
	printf("Informe o comprimento do comodo em Metros: ");
	scanf("%f", &comprimentoComodo);
	
	numeroLampadas = (larguraComodo * comprimentoComodo) * 18/potenciaLampada;
	
	printf("O numero de lampadas necessarias e: %.2f", numeroLampadas);
}
