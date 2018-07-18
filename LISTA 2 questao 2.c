#include<stdio.h>

int ano_nascimento;

main(){
	
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &ano_nascimento);
	
	ano_nascimento = 2018 - ano_nascimento;
	
	if(ano_nascimento >= 16){
		
		printf("Voce podera votar!");
		
	} else{
	
	printf("Voce nao possui idade para votar!");
	}
	
}
