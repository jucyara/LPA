/*Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um
concurso de beleza. Quando for informada a palavra FIM para o nome da mo�a o
programa dever� ser encerrado e imprimir: o nome e a altura da mo�a mais alta e o
n�mero de mo�as no concurso. Considere que todas as mo�as possuem altura
diferente.*/

#include<stdio.h>
#include<string.h>

main(){
	char nome[100], candidata_alta[100];
	float altura[100], maior;
	int i, quantidade = 0;
	
	//Percorrendo o vetor
	for(i = 0; i < 3; i++){
		
		printf("======================================\n");
		printf("Nome: ");
		fflush(stdin);
		gets(nome);
		
		if(strcmp(nome, "Fim") == 0){ //Compara o vetor com fim, se for igual a ele, para.
			break;
		}
		printf("\nAltura: ");
		fflush(stdin);
		scanf("%f", &altura[i]);
		
		quantidade++;
		if(altura[i] > maior){
			
		maior = altura[i];
		strcpy(candidata_alta, nome);	
		}
	}
	printf("=================== RESULTADO ===================\n");
	printf("Quantidade de mocas %d\na moca com a maior altura e %s\naltura maior %.2f", quantidade, candidata_alta , maior);
}
