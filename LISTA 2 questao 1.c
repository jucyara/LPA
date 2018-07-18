#include<stdio.h>

int numero1, numero2;

main (){
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	
	printf("Digite outro numero: ");
	scanf("%d", &numero2);
	
	if(numero1 > numero2){
		
		printf("O primeiro numero - %d e maior que o segundo - %d\n", numero1, numero2);
		
	} else if(numero2 > numero1){
		
		printf("O segundo numero - %d e maior que o primeiro - %d\n", numero2, numero1);
		
	} else
	
	printf("Eles sao iguais %d = %d\n", numero1, numero2);
}
