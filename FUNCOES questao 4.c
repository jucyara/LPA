/*4.Faça uma função que receba um valor inteiro e positivo e calcula o seu
fatorial.*/

#include<stdio.h>

int fatorial(int n){
	
	int i, fat = 1;
	
	for(i = 1; i <= n; i++){
		
		fat *= i;
	}
	
	return(fat);
}

main(){
	
	int num, resultado;
	
	printf("Entre com um numero: ");
	scanf("%i", &num);
	
	resultado = fatorial(num);
	
	printf("%i\n", resultado);
}
