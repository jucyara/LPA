/*Um professor necessita calcular as notas de seus alunos. Ele ficou sabendo que voc� � um bom programador
e contratou voc� para implementar um programa que solicite tr�s notas e informe a m�dia aritm�tica delas. */

#include<stdio.h>

float N1, N2, N3, Media;

main(){
	printf("Informe a primeira nota: ");
	scanf("%f", &N1);
	printf("Informe a segunda nota: ");
	scanf("%f", &N2);
	printf("Informe a terceira nota: ");
	scanf("%f", &N3);
	
	Media = (N1 + N2 + N3)/3;
	printf("A media aritmetica e: %f", Media);
}
