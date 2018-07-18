#include<stdio.h>

int numero1, numero2, numero3, soma;

main(){
	
	scanf("%d", &numero1);
	
	scanf("%d", &numero2);
	
	scanf("%d", &numero3);
	
	if((numero1 < numero2) && (numero1 < numero3)){
		
		soma = numero2 + numero3;
		
	} else if((numero2 < numero1) && (numero2 < numero3)){
		
		soma = numero1 + numero3;
		
	} else{
		
		soma = numero1 + numero2;
	}
		
	printf("A SOMA dos dois maiores sera: %d", soma);
	
}
