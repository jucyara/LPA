#include<stdio.h>

/* Pre�o do p�o: R$ 0.18
PANIFICADORA P�O DE ONTEM - Tabela De Pre�os
1 - R$ 0.18
2 - R$ 0.36
...
50 - R$ 9.00 */

main(){
	
	int i;
	float pao, valor;
	
	printf("Valor do pao: ");
	scanf("%f", &pao);
	
	for(i = 1; i <= 50; i++){
		
		valor = pao * i;
		
		printf("%d - R$ %.2f\n", i, valor);
	}
}
