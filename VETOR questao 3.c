/*Programa para calcular a soma de um conjunto de valores reais positivos. O Flag é um valor
negativo. O término ocorrerá quando o flag for lido.

OBS.: FLAG é um tipo de valor que é lido e que representa o final dos dados. Seu valor não
pode ser considerado nos cálculos realizados.*/

#include<stdio.h>

main(){
	
	int i = 0;
	float vetor[10], soma = 0;
	
	vetor[9] = -1;
	
	while(vetor[i] >= 0){
				
	printf("Digite um numero da posicao %d: ", i);
	scanf("%f", &vetor[i]);
		
	soma = soma + vetor[i];	

	i++;
	
	}
	printf("A soma sera: %.1f", soma);
}
