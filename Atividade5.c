/*Calcular o consumo médio do veículo, sendo informados a distância percorrida e o número
de litros consumidos. Formúla: (CM = D/LIT) */

#include<stdio.h>

float distancia, litros, consumoMedio;

main(){
	printf("Informe a distancia percorrida: ");
	scanf("%f", &distancia);
	
	printf("Informe o consumo de litros: ");
	scanf("%f", &litros);
	
	consumoMedio = distancia/litros;
	
	printf("O consumo medio do veiculo foi de: %.2f", consumoMedio);
}
