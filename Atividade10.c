/*Implemente um programa que solicite dois valores de dólar (preço) e informe a diferença relativa e absoluta entre eles.

diferencaAbsoluta = valorDolarOntem - valorDolarHoje
diferencaRelativa = (diferencaAbsoluta * 100) / valorDolarOntem */

#include<stdio.h>

float valorDolarOntem, valorDolarHoje, diferencaAbsoluta, diferencaRelativa;

main(){
	printf("Informe o valor do Dolar ontem: ");
	scanf("%f", &valorDolarOntem);
	
	printf("Informe o valor do Dolar hoje: ");
	scanf("%f", &valorDolarHoje);
	
	diferencaAbsoluta = valorDolarOntem - valorDolarHoje;
	
	printf("A Diferenca Absoluta e: %f\n", diferencaAbsoluta);
	
	diferencaRelativa = (diferencaAbsoluta * 100)/valorDolarOntem;
	
	printf("A Diferenca Relativa e: %f", diferencaRelativa);
}
