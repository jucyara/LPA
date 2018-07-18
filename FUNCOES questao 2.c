/*2. Escreva uma função que recebe as 3 notas de um aluno por parâmetro
e uma letra. Se a letra for A o procedimento calcula a média aritmética
das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2).
A média calculada também deve retornar por parâmetro.*/

#include<stdio.h>

float media_aritmetica(float n1, float n2, float n3){
	
	return((n1 + n2 + n3) / 3);
}

float media_ponderada(float nota1, float nota2, float nota3){
	
	return((nota1 * 5 + nota2 * 3 + nota3 * 2) / 10);
}

main(){
	
	float x, y, z, resultado;
	char op;

while(2){
	
	printf("Informe a primeira nota: ");
	scanf("%f", &x);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &y);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &z);
	
	printf("\n====== Menu ======\n");
	printf("\nA-Media Aritimetica\n");
	printf("\nP-Media Ponderada\n");
	printf("\nInforme a opcao: ");
	fflush(stdin);
	scanf("%c", &op);
	
	switch(op){
		
		case 'A':
			
			resultado = media_aritmetica(x,y,z);
			
			printf("\nMedia: %.2f\n\n", resultado);
		break;
		
		case 'P':
			
			resultado = media_ponderada(x,y,z);
			
			printf("\nMedia: %.2f\n\n", resultado);
		break;
	}
	
}
}
