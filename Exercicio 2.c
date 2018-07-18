/*Faça um programa de um cadastro de 20 alunos de uma turma. Onde o usuário cadastra nomes e três notas.
Exiba:
- Todos os dados cadastrados (Nome e média)
- Nome em maiúscula;
- Quantidade de caracteres do nome;
- A média obtida.*/

#include<stdio.h>
#include<string.h>

main(){
	char nome[40];
	float n1, n2, n3, media;
	int i;
	
	for(i = 0; i < 3; i++){
		
		printf("======================================\n");
		printf("Nome: ");
		fflush(stdin);
		gets(nome);
		
		printf("\nNota 1: ");
		fflush(stdin);
		scanf("%f", &n1);
		
		printf("\nNota 2: ");
		fflush(stdin);
		scanf("%f", &n2);
		
		printf("\nNota 3: ");
		fflush(stdin);
		scanf("%f", &n3);
		
	printf("\n===Listagem de dados===\n");
	
	strupr(nome);
	puts(nome);
	
	printf("Tamanho do Nome: ");
	printf("%d", strlen(nome));
	
	media = (n1 + n2 + n3)/3;
	
	printf("\nMedia: %.2f\n\n", media);
	}
}
