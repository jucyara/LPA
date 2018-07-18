/*Faça um programa que receba o código correspondente ao cargo de um funcionário
e o seu salário atual e mostre o cargo, o valor do aumento, e seu novo salario. */

#include<stdio.h>

int codigo_cargo;
float salario_atual, aumento;

main(){
	
	printf("1-Escrituario\n\n");
	printf("2-Secretario\n\n");
	printf("3-Gerente\n\n");
	printf("4-Diretor\n\n");
	printf("Informe o codigo correspondente ao cargo: \n");
	scanf("%d", &codigo_cargo);
	
	printf("Digite o salario atual: ");
	scanf("%f", &salario_atual);
	
	switch(codigo_cargo){
		
		case 1: aumento = salario_atual * 0.5;
		printf("O aumento sera de: %.1f\n", aumento);
		printf("O salario novo sera: %.2f", (salario_atual + aumento));
		break;
		
		case 2: aumento = salario_atual * 0.35;
		printf("O aumento sera de: %.1f\n", aumento);
		printf("O salario novo sera: %.2f", (salario_atual + aumento));
		break;
		
		case 3: aumento = salario_atual * 0.1;
		printf("O aumento sera de: %.1f\n", aumento);
		printf("O salario novo sera: %.2f", (salario_atual + aumento));
		break;
		
		case 4: aumento = salario_atual * 0.0;
		
		printf("O aumento sera de: %.1f\n", aumento);
		printf("Este cargo nao tera aumento!");
		break;
		
		default: printf("Codigo errado!");		
	}	
}
