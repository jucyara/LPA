/*Crie um programa que calcule o tamanho de uma string (N�o pode usar a fun��o
strlen), crie sua pr�pria strlen.*/

#include<stdio.h>
#include<string.h>

main(){
	
	char string[100];
	int strlen;
	
	printf("Digite qualquer coisa: ");
	gets(string);
	
	//Toda string termina quando � encontrado o \0, ent�o podemos achar a quantidade de letras
	
	while(string[strlen] != '\0'){
		
		strlen++;
	}
	
	printf("Tamanho da string %d caracteres\n", strlen);
}
