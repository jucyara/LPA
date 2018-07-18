#include<stdio.h>

void main(){
	
	int i, idade;
	int eng = 0;
	int comp = 0;
	int adm = 0;
	int aluno_eng = 0;
	int aluno_comp = 0;
	int aluno_adm = 0;
	int soma_idade_eng = 0  ;
	int soma_idade_comp = 0 ;
	int soma_idade_adm = 0;
	float media1, media2, media3, menor;
	
	for(i = 0; i < 3; i++){
		int opcao = 0;
		printf("Informe sua idade: ");
		scanf("%d",&idade);
		
		printf("\n1-Engenharia\n");
		printf("2-Computacao\n");
		printf("3-Administracao\n");
		printf("\nDigite sua opcao: ");
		scanf("%d",&opcao);
		
		switch(opcao){
		
		case 1: 
		
		if((idade <= 20) && (idade <= 25)){
			
			aluno_eng++;
		}
		soma_idade_eng = soma_idade_eng + idade;
		
		eng++; /* somando o numero de alunos por curso */
		break;
		
		case 2: 
		
		if((idade <= 20) && (idade <= 25)){
			
			aluno_comp++;
		}
		
		soma_idade_comp = soma_idade_comp + idade;
		comp++;
		break;
		
		case 3: 
		
		if((idade <= 20) && (idade <= 25)){
			
			aluno_adm++;
		}
		
		soma_idade_adm = soma_idade_adm + idade;
		adm++;
		break;
		
		default: printf("Nao informado");
	}
	}
	
	media1 = soma_idade_eng / eng;
	media2 = soma_idade_comp / comp;
	media3 = soma_idade_adm / adm;
	
	if((media1 < media2) && (media1 < media3)){
		
		menor = media1;
		
	} else if((media2 < media1) && (media2 < media3)){
		
		menor = media2;
		
	} else{
	menor = media3;
	}

	printf("\nO numero de alunos de Engenharia e: %d\n", eng);
	printf("\nO numero de alunos de Computacao e: %d\n", comp);
	printf("\nO numero de alunos de Administracao e: %d\n", adm);
	printf("\nO numero de alunos entre 20 e 25 anos de Engenharia e: %d\n", aluno_eng);
	printf("\nO numero de alunos entre 20 e 25 anos de Computacao e: %d\n", aluno_comp);
	printf("\nO numero de alunos entre 20 e 25 anos de Administracao e: %d\n", aluno_adm);
	printf("\nO curso com menor media de idade e: %f\n", menor);
	printf("\nA media de alunos de Engenharia e: %f\n", media1);
	printf("\nA media de alunos de Computacao e: %f\n", media2);
	printf("\nA media de alunos de Administracao e: %f\n", media3);


}
