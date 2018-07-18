/*Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular e escrever
a quantidade de caixas de azulejos para se colocar em todas as paredes (considere que não será descontada a área ocupada por
portas e janelas). Cada caixa de azulejos possui 1,5 m2. */

#include<stdio.h>

float comprimento, largura, altura, area, caixasAzulejos;

main(){
	
	printf("Digite o Comprimento da cozinha: ");
	scanf("%f", &comprimento);
	
	printf("\nDigite a Largura da cozinha: ");
	scanf("%f", &largura);
	
	printf("\nDigite a Altura da cozinha: ");
	scanf("%f", &altura);
	
	area = (comprimento * altura * 2) + (largura * altura * 2);
	
	caixasAzulejos = 1.5;
	
	printf("\nQuantas caixas de ceramicas sao necessarias? %.2f caixas", area/caixasAzulejos);
}
