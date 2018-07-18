#include<stdio.h>

int quantidade_macas;
float compra;

main (){
	
	printf("Digite a quantidade de macas: ");
	scanf("%d", &quantidade_macas);
	
	if(quantidade_macas < 12){
		
		compra = quantidade_macas * 0.30;
		
		printf("O valor da compra foi: %.2f", compra);
		
	} else{
		
	compra = quantidade_macas * 0.25;
	
	printf("O valor da compra foi: %.2f", compra);	
	}
}
