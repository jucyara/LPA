/*Escreva um programa para ler a temperatura em Graus Fahrenheit (°F), calcular e escrever
o valor correspondente em Graus Celcius (°C). */

#include<stdio.h>

float C, F;

main(){
	printf("Informe a temperatura em Graus Fahrenheit: ");
	scanf("%f", &F);
	
	C = (F-32)/1.8;
	 
	printf("A temperatura em Graus Celcius e: %.2f", C); 
}
