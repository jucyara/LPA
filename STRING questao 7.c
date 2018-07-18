/*Em uma competição de salto em distância cada atleta tem direito a cinco saltos. O
resultado do atleta será determinado pela média dos cinco valores restantes. Você
deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo
atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos. O
programa deve ser encerrado quando não for informado o nome do atleta. A saída do
programa deve ser conforme o exemplo abaixo:
Atleta: Rodrigo Curvêllo
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m
Resultado final:
Atleta: Rodrigo Curvêllo
Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
Média dos saltos: 5.9 m*/

#include<stdio.h>
#include<string.h>

main(){
	int i;
	float salto[5], media = 0, soma = 0;
	char nome[20];
	
	//Percorrendo o vetor
	while(2){
		
		printf("Nome: ");
		gets(nome);
		
		if(strcmp(nome, "fim") == 0){
			break;
		}
		for(i = 0; i < 5; i++){
			
			printf("Salto %d: ", i);
			scanf("%f", &salto[i]);
			
			soma += salto[i];
		}
		media = soma / 5;
		
		printf("\nResultado Final\n");
		printf("Atleta %s: ", nome);
		printf("Saltos: %f - %f - %f - %f - %f", salto[0], salto[1], salto[2], salto[3], salto[4]);
	}
}
