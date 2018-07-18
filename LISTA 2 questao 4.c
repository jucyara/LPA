#include<stdio.h>

int senha;

main(){
	
	printf("Informe sua senha: ");
	scanf("%d", &senha);
	
	if(senha == 1234){
		
		printf("ACESSO PERMITIDO!", senha);
		
	} else
	
	printf("ACESSO NEGADO!!", senha);
}
