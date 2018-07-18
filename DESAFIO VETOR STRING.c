#include<stdio.h>
#include<string.h>

main(){
	
	char nome[30], idade[30], op[10], notas[3];
	float media;
	strcpy(op, "vazio");
	
	while(strcmp(strupr(op),"Fim") != 0){
		
	printf("\nEntre com o nome do aluno: ");
	gets(nome);
	
	printf("Entre com a idade: ");
	gets(idade);
	
	printf("Entre com as notas: ");
	gets(notas);
	
	printf("\n===Listagem de dados===\n");
	
	printf("Nome do aluno: ");
	puts(strupr(nome));
	
	printf("Idade: ");
	puts(idade);
	
	printf("Notas: ");
	puts(notas);
	
	puts("Escreva <Fim> ");
	gets(op);
	
	}
}
