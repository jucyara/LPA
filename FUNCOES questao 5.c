/*5. Fa�a uma fun��o que receba um valor inteiro e positivo e calcula o
n�mero de fibonacci na posi��o passada como par�metro.*/

#include<stdio.h>

int fibonacci(int n){

int i, a = 0, b = 1, cont = 0;
	
	for(i = 0; i < n; i++){
		
		cont = a + b;
		
		a = b;
		b = cont;
	}
	
	return(cont);	
}

main(){
	int num, resultado;
	
	printf("Entre com posicao de Fibonacci: ");
	scanf("%i", &num);
	
	resultado = fibonacci(num);
	
	printf("%i\n", resultado);
}
