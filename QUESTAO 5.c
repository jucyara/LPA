#include<stdio.h>

main(){
	
	char sexo, cor_olhos, cor_cabelo;
	int idade, maior_idade, sexo_fem = 0, caracteristica = 0;
	float porcentagem;
	
	printf("Informe a idade (-1 p/sair): ");
	scanf("%d", &idade);
	
	maior_idade = idade;
	
	while(idade >= 0){
		
		printf("\nInforme o sexo (M/F): ");
		scanf("%c", &sexo);
		
		printf("\nCor dos Olhos (A-Azul/ V-Verde/ C-Castanho): ");
		scanf("%c", &cor_olhos);
		
		printf("\nCor dos Cabelos (L-Louro/ P-Preto/ C-Castanho): ");
		scanf("%c", &cor_cabelo);
		
		caracteristica++;
		
		if(idade > maior_idade){
			
			maior_idade = idade;
		}
		if((sexo == 'F') && (idade >= 18) && (idade <= 35) && (cor_olhos 'V' == 0) && (cor_cabelo == 'L')){
			
			sexo_fem++;
			
			printf("Informe a idade (-1 p/sair): ");
			scanf("%d", &idade);
		}
		if(caracteristica > 0){
			
			printf("\nMaior idade dos habitantes: %d feminino: %d\n", maior_idade, sexo_fem);
			
			porcentagem = (sexo_fem * 100)/caracteristica;
			printf("\nPorcentagem de Mulheres atraves das caracteristicas: %f\n", porcentagem);
	
		}
	}
}
