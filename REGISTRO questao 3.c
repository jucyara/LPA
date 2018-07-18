/*3. Crie um programa que permita armazenar o nome, a altura e da data de nascimento,matrícula de até 10 alunos. Cada aluno deve ser
representada por uma struct . A data de nascimento dentro da struct aluno , também deve ser uma struct .*/

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
}Alunos;

main(){
	int i;
	
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
	}

}
