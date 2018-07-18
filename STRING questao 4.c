/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É
um tipo de substituição na qual cada letra do texto é substituýda por outra, que se
apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma
troca de três posições, A seria substituýdo por D, B se tornaria E, e assim por diante.
Implemente um programa que faça uso desse Código de César (3 posições), entre com
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
