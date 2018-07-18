/*Crie um programa que faça o controle acadêmico dos alunos ao longo de um semestre,
com as seguintes característica:

-Nome, vetor com três notas, série(1º, 2º ou 3º anos), disciplina(português ou matemática)

Elabore um programa que: 

a)Cadastra "N" alunos;

b)Fazer uma listagem por disciplina dos alunos que ficaram em recuperação (média < 7);

c)Qual o nome, série e disciplina do aluno com maior média.*/

#include<stdio.h>
#include<string.h>
#define N 2

int i, indiceMaior = 0, indiceMenor = 0;
float maior, menor;

typedef struct{
	
	char nome[40];
	char disciplina;
	float n1, n2, n3;
	float media;
	int serie;
	
}Aluno;

Aluno aluno[N];

void cadastrar(Aluno aluno[N]){
	
	printf("\n====== CADASTRAR ALUNO ======\n");
	
	for(i = 0; i < N; i++){
		
	printf("===============================================\n");
	printf("Nome: ");
	fflush(stdin);
	scanf("%s", &aluno[i].nome);
			
	printf("\nNota1: ");
	fflush(stdin);
	scanf("%f", &aluno[i].n1);
	
	printf("\nNota2: ");
	fflush(stdin);
	scanf("%f", &aluno[i].n2);
	
	printf("\nNota3: ");
	fflush(stdin);
	scanf("%f", &aluno[i].n3);
				
	printf("\nDisciplina P-portugues / M-matematica: ");
	fflush(stdin);
	scanf("%c", &aluno[i].disciplina);
	
	printf("\nSerie 1-primeiro ano / 2-segundo ano / 3-terceiro ano: ");
	fflush(stdin);
	scanf("%i", &aluno[i].serie);
	}
}

void listar(Aluno aluno[N]){
	
	printf("\n==== LISTAR ALUNO ====\n");
	
	for(i = 0; i < N; i++){
		
		if(aluno[i].disciplina == 'P' ){
		
		aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)  / 3;
		
		if(aluno[i].media < 7.0){
			
			printf("\nAluno: %s\nDisciplina %c\nMedia: %.2f\nSerie: %i\n", aluno[i].nome, aluno[i].disciplina, aluno[i].media, aluno[i].serie);
			printf("\nSituacao: Recuperacao\n");
		}
	}	
		if(aluno[i].disciplina == 'M' ){
			
		aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)  / 3;
		
		if(aluno[i].media < 7.0){
			
			printf("\nAluno: %s\nDisciplina %c\nMedia: %.2f\nSerie: %i\n", aluno[i].nome, aluno[i].disciplina, aluno[i].media, aluno[i].serie);
			printf("\nSituacao: Recuperacao\n");
		}	
		}
	}
}

void consultar(Aluno aluno[N]){
	
	printf("\n====== CONSULTAR ALUNO ======\n");
	
	maior = aluno[0].media;
	menor = aluno[0].media;
	
	for(i = 0; i < N; i++){
	
	if(aluno[i].media > maior){
		
		indiceMaior = i;
		maior = aluno[i].media;
	}
	if(aluno[i].media < menor){
		
		indiceMenor = i;
		menor = aluno[i].media;
	}		
	}
	printf("\nMaior Media\n");
	printf("O aluno: %s\n", aluno[indiceMaior].nome);
	printf("da serie: %i\n", aluno[indiceMaior].serie);
	printf("da disciplina: %c\n", aluno[indiceMaior].disciplina);
	printf("tem media: %.2f\n", maior);
}

main(){
	
	Aluno aluno[N];
	int opcao;
	
	while(opcao >= 0){
		
	printf("\n====== Menu ======\n");
	printf("\n1-Cadastro\n");
	printf("\n2-Listagem\n");
	printf("\n3-Consulta\n");
	printf("\n4-Sair");
	
	printf("\n\nDigite sua opcao: ");
	fflush(stdin);
	scanf("%i", &opcao);
	
	switch(opcao){
		
		case 1: //Cadastrar
		
		cadastrar(aluno);
		break;
		
		case 2: //Listar
		
		listar(aluno);
		break;
		
		case 3: //Consultar
		
		consultar(aluno);
		break;
		
		case 4: printf("\nEncerrado!");
		opcao=-1;
		break;
		
		default: printf("\nTente novamente...");
	}
	}
}
