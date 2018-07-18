/*Escreva um programa para calcular e imprimir o numero de l�mpadas necess�rias para iluminar um determinado c�modo de uma
resid�ncia. Dados de entrada: pot�ncia da l�mpada utilizada (em watts), dimens�es (largura e comprimento, em metros) do
c�modo. Considere que a pot�ncia necess�ria � de 18 watts por metro quadrado. */

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
