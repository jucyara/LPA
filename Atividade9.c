/*Um motorista de t�xi deseja calcular o rendimento de seu carro na pra�a. Sabendo-se que o pre�o do combust�vel � de R$1,90,
escreva um programa para ler: a marca��o do od�metro (km) no in�cio do dia, a marca��o (km) no final do dia, o n�mero de 
litros de combust�vel gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a m�dia do consumo em km/L
e o lucro (l�quido) do dia. */

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
