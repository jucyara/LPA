/*Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um
concurso de beleza. Quando for informada a palavra FIM para o nome da moça o
programa deverá ser encerrado e imprimir: o nome e a altura da moça mais alta e o
número de moças no concurso. Considere que todas as moças possuem altura
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
