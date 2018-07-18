/*4. Reaproveite o programa do exercício 3, adicione notas na estruturas e faça a média de notas dos 10 alunos.*/

#include<stdio.h>
#include<string.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}Datas;

typedef struct{
	char nome[40];
	float altura;
	int matricula;
	Datas data;
	float nota;
}Alunos;

main(){
	int i;
	float soma = 0;
	
	Alunos aluno[3];
	
	for(i = 0; i < 3; i++){
	
	system("cls");	
	puts("Nome do aluno: ");
	fflush(stdin);
	gets(aluno[i].nome);
	
	printf("Altura do aluno: ");
	fflush(stdin);
	scanf("%f", &aluno[i].altura);
	
	printf("Matricula do aluno: ");
	fflush(stdin);
	scanf("%i", &aluno[i].matricula);
	
	printf("Data do aluno - dia: ");
	fflush(stdin);
	scanf("%i", &aluno[i].data.dia);
	
	printf("Data do aluno - mes: ");
	fflush(stdin);
	scanf("%i", &aluno[i].data.mes);
	
	printf("Data do aluno - ano: ");
	fflush(stdin);
	scanf("%i", &aluno[i].data.ano);
	
	printf("Nota do aluno: ");
	scanf("%f", &aluno[i].nota);
	
	soma += aluno[i].nota;	
	}
	soma = soma /3;
	
	system("cls");
	printf("Media dos alunos e: %.2f", soma);
}
