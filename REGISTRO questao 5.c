/*5. Escrever um programa que cadastre v�rios produtos. Em seguida, imprima uma lista com o c�digo e nome da cada produto. Por �ltimo, 
consulte o pre�o de um produto atrav�s de seu c�digo e depois pergunte se deseja encerrar o programa 1 - sair 0 - n�o.*/

#include<stdio.h>
#include<string.h>

	typedef struct{
	char nome[40];
	float preco;	
	}Produto;
	
main(){
	int i, x, y;
	
	Produto produto[3];
	
//Cadastrando...
	for(i = 0; i < 3; i++){
		
	system("cls");	
	printf("Nome do produto: ");
	fflush(stdin);
	scanf("%s", &produto[i].nome);
	
	printf("Preco do produto: ");
	fflush(stdin);
	scanf("%f", &produto[i].preco);
	}
	
//Imprimindo...
	for(x = 0; x < 3; x++){
	
	printf("Codigo do produto - %i\t", x);
	printf("Nome do produto - %s\n", produto[x].nome);
	}	

//Buscando...
	for(y = 0; y < 3; y++){
	
	printf("\nCodigo: ");
	scanf("%i", &i);
	
	printf("\nCodigo do produto - %i\t", i);
	printf("Preco do produto - %.2f\n", produto[i].preco);
	}	
}
