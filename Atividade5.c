/*Calcular o consumo m�dio do ve�culo, sendo informados a dist�ncia percorrida e o n�mero
de litros consumidos. Form�la: (CM = D/LIT) */

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
