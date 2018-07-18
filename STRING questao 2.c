/*Faça um programa que leia duas strings (de tamanho máximo 40). Após isso, o
programa deve concatenar as informações lidas e mostrar o resultado para o usuário.
Exemplo: Se a primeira string digitada for "Bom dia, " e a segunda "moçada !", então
o resultado deverá ficar: "Bom dia, moçada !"*/

#include<stdio.h>
#include<string.h>

main(){
	
	char str1[40], str2[40];
	
	printf("Digite a primeira frase: ");
	gets(str1);
	
	printf("Digite a segunda frase: ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("%s", str1);
	
}
