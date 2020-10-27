#include<stdio.h>
//
main(){
	
	int senha;
	char caracter;
	
	printf("Qual o caracter do usuario?: ");
	scanf(" %c", &caracter);
	
	do{	
		
	printf("Digite sua senha: ");
	scanf("%d", &senha);
		
	if(senha == caracter){
			
	printf("Nao e permitido senha igual ao caracter do usuario!");			
	}
	}while(caracter == senha);
}
