/*O c�digo de C�sar � uma das mais simples e conhecidas t�cnicas de criptografia. �
um tipo de substitui��o na qual cada letra do texto � substitu�da por outra, que se
apresenta no alfabeto abaixo dela um n�mero fixo de vezes. Por exemplo, com uma
troca de tr�s posi��es, A seria substitu�do por D, B se tornaria E, e assim por diante.
Implemente um programa que fa�a uso desse C�digo de C�sar (3 posi��es), entre com
uma string e retorne a string codificada.
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR
FDQVDGR*/

#include<stdio.h>
#include<string.h>

main(){
	
	char frase[100];
	int i = 0;
	
	printf("Digite a frase a ser encriptada: ");
	gets(frase);
	
	printf("\n\nFrase encriptada com sucesso!\n\n");
	printf("Encriptacao: ");
	
	for(i = 0; i < strlen(frase); i++){
		
		int enc = (int)frase[i] + 3;
		
		printf("%c", (char)enc);
	}
	
}
