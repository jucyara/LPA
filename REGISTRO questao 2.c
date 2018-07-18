/*2. Crie um looping para preencher as 5 estruturas de pessoas criadas no exemplo passado. e leia esses valores e exiba esses dados depois.*/

#include<stdio.h>
#include<string.h>

//definindo a estrutura pessoa, com as características nome, idade e sexo.
	typedef struct{
		char nome[40];
		char sexo;
		int idade;
	}Pessoa;

main(){
	int i;
	
	Pessoa pessoa[5]; //Para preencher 5 criamos um vetor de estruturas
	
	for(i = 0; i < 5; i++){
		
	puts("Informe seu nome: ");
	fflush(stdin);
	gets(pessoa[i].nome); //Igual um vetor comum, acessamos ele pelo indice
	
	printf("Informe sua idade: ");
	fflush(stdin);
	scanf("%i", &pessoa[i].idade);
	
	printf("Informe seu sexo m-masculino/ f-feminino: ");
	scanf(" %c", &pessoa[i].sexo);
	
	printf("\nNome: %s\n", pessoa[i].nome);
	printf("Idade: %i\n", pessoa[i].idade);
	
	if(pessoa[i].sexo == 'm'){
		
		printf("Sexo: Masculino\n\n");
	}else{
		printf("Sexo: Feminino\n\n");
	}
}

}
