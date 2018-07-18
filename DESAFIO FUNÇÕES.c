#include <stdio.h>

float celsius, farenheit;
float CalcularTemperatura(float TC){
float TF;

TF = TC *(9/5) + 32;
return TF;

}
int main(void) {
	
printf("==== Transforma Celsius em Farenheit====\n");

printf("\nDigite a Temperatura em Celsius:");
scanf("%f",&celsius);

farenheit = CalcularTemperatura(celsius);

printf(" Temperatura Farenheit: %0.2f", farenheit);
return 0;

}
