/*Faça um programa que receba a idade de um nadador e mostre a sua categoria usando as regras a seguir:

a-Infantil de 5 a 7;
b-Juvenil de 8 a 10;
c-Adolescente de 11 a 15;
d-Adulto de 16 a 30;
e-Sênior acima de 30. */

#include<stdio.h>

int idade;

main(){
	
	printf("'a'.Infantil de 5 a 7\n");
	printf("'b'.Juvenil de 8 a 10\n");
	printf("'c'.Adolescente de 11 a 15\n");
	printf("'d'.Adulto de 16 a 30\n");
	printf("'e'.Senior acima de 30\n\n");
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
		
	if((idade >= 5) && (idade <= 7)){
			
		printf("\nCategoria INFANTIL: %d anos", idade);
			
		}else if((idade >= 8) && (idade <= 10)){
			
		printf("\nCategoria JUVENIL: %d anos", idade);
			 
		}else if((idade >= 11) && (idade <= 15)){
			
		printf("\nCategoria ADOLESCENTE: %d anos", idade);
			
		}else if((idade >= 16) && (idade <= 30)){
			
		printf("\nCategoria ADULTO: %d anos", idade);
			
		}else{
			
		printf("\nCategoria SENIOR: %d anos", idade);
	}
}
