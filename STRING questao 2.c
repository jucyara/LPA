/*Fa�a um programa que leia duas strings (de tamanho m�ximo 40). Ap�s isso, o
programa deve concatenar as informa��es lidas e mostrar o resultado para o usu�rio.
Exemplo: Se a primeira string digitada for "Bom dia, " e a segunda "mo�ada !", ent�o
o resultado dever� ficar: "Bom dia, mo�ada !"*/

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
