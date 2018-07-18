/*Crie um programa que calcule o tamanho de uma string (Não pode usar a função
strlen), crie sua própria strlen.*/

#include<stdio.h>
#include<string.h>

main(){
	
	char string[100];
	int strlen;
	
	printf("Digite qualquer coisa: ");
	gets(string);
	
	//Toda string termina quando é encontrado o \0, então podemos achar a quantidade de letras
	
	while(string[strlen] != '\0'){
		
		strlen++;
	}
	
	printf("Tamanho da string %d caracteres\n", strlen);
}
