/*Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$1,90,
escreva um programa para ler: a marcação do odômetro (km) no início do dia, a marcação (km) no final do dia, o número de 
litros de combustível gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em km/L
e o lucro (líquido) do dia. */

#include<stdio.h>

float odometroInicial, odometroFinal, combustivelGasto, lucroPassageiros, lucroLiquido, mediaConsumo;

main(){
	printf("Informe o valor do odometro no inicio do dia: ");
	scanf("%f", &odometroInicial);
	
	printf("Informe o valor do odometro no final do dia: ");
	scanf("%f", &odometroFinal);
	
	printf("Informe o total de combustivel gasto: ");
	scanf("%f", &combustivelGasto);
	
	printf("Informe o lucro de passageiros: ");
	scanf("%f", &lucroPassageiros);
	
	mediaConsumo = (odometroInicial - odometroFinal)/combustivelGasto;
	
	lucroLiquido = (combustivelGasto * 1.90) - lucroPassageiros;
	
	printf("A media de KM/L e: %f\n", mediaConsumo);
	printf("O lucro liquido e: %f", lucroLiquido);
}
