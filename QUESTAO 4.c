#include<stdio.h>

/* Preço do pão: R$ 0.18
PANIFICADORA PÃO DE ONTEM - Tabela De Preços
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
