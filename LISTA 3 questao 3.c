/*Uma m�quina virtual recebe um valor e exibe o seu quadrado quando ele � par,
e o seu cubo quando ele � impar. Fa�a um programa para essa m�quina. */ 

#include<stdio.h>

main(){
	
	int numero;
	
	printf("Digite um numero qualquer: \n");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		
		printf("Quadrado de %d = %d\n", numero, (numero * numero));
		
	} else {
		printf("Cubo de %d = %d\n", numero, (numero * numero * numero));
	}
}
