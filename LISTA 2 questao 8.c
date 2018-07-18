#include<stdio.h>

int lado1, lado2, lado3;

main(){
	
	 scanf("%d", &lado1);
	 scanf("%d", &lado2);
	 scanf("%d", &lado3);
	 
	 if((lado1 == lado2) && (lado1 == lado3)){
	 	
	 	printf("O triangulo e EQUILATERO");
	 	
	 }else if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
	 	
	 	printf("O triangulo e ESCALENO");
	 	
	 } else{
	 	
	 	printf("O triangulo e ISOSCELES");
	 }
}
