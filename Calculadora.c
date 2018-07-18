#include<stdio.h>

int a, b, resultado;
float a_1, b_2, div_result;

int soma(int a, int b){
	
	return(a + b);
}

int subtracao(int a, int b){
	
	return(a - b);
}

int multiplicacao(int a, int b){
	
	return(a * b);
}

float divisao(float a, float b){
	
	return(a / b);
}

main(){
	int op = 0;
	
	while(op >= 0){
		
	printf("\n===========MENU DE OPCOES===========\n");
	printf("\n1-Soma\n");
	printf("\n2-Subtracao\n");
	printf("\n3-Multiplicacao\n");
	printf("\n4-Divisao\n");
	printf("\n5-Sair\n");
	
	printf("\nDigite sua opcao: ");
	scanf("%i", &op);
	
	switch(op){
		
		case 1:
			
			printf("\nEntre com um numero: ");
			scanf("%i", &a);
			
			printf("\nEntre com o segundo: ");
			scanf("%i", &b);
			
			resultado = soma(a,b);
			
			printf("\nO resultado da soma e: %i", resultado);
			break;
			
		case 2:
			
			printf("\nEntre com um numero: ");
			scanf("%i", &a);
			
			printf("\nEntre com o segundo: ");
			scanf("%i", &b);
			
			resultado = subtracao(a,b);
			
			printf("\nO resultado da subtracao e: %i", resultado);
			break;
			
		case 3:
			
			printf("\nEntre com um numero: ");
			scanf("%i", &a);
			
			printf("\nEntre com o segundo: ");
			scanf("%i", &b);
			
			resultado = multiplicacao(a,b);
			
			printf("\nO resultado da multiplicacao e: %i", resultado);
			break;
		
		case 4:
			
			printf("\nEntre com um numero: ");
			scanf("%i", &a_1);
			
			printf("\nEntre com o segundo: ");
			scanf("%i", &b_2);
			
			div_result = divisao(a_1,b_2);
			
			printf("\nO resultado da divisao e: %.2f", div_result);
			break;
			
		case 5: printf("\n</END>");
		
		op = -1;
		break;
		
		default: printf("\nOpcao Invalida!");
	}
		
	}
}
