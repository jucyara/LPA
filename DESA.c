#include<stdio.h>
#include<string.h>
#define N 3

main(){
	int opcao = 1, i, indiceMaior = 0, indiceMenor = 0, tr_diurno = 0, tr_noturno = 0;
	float maior, menor, media, sal_minimo = 1000, media_salarial_d = 0, media_salarial_n = 0;
	
	typedef struct{ char nome[100];
	char turno;
	int horas_trab;
	float salario, valor_hora;
	}Funcionarios;
	
	Funcionarios funcionario[N];
	
	while(opcao != 4){
		
	printf("\n\n====== MENU DE CADASTRO DE FUNCIONARIOS ======\n");
	printf("\n1-Cadastrar funcionario\n");		
	printf("\n2-Listar funcionario e a quantidade\n");
	printf("\n3-Consultar\n");
	printf("\n4-Sair");
		
	printf("\n\nDigite a opcao desejada: ");
	fflush(stdin);
	scanf("%i", &opcao);
		
	switch(opcao){
			
	case 1:
				
	system("cls");
	printf("\n====== CADASTRAR FUNCIONARIO ======\n");
			
	for(i = 0; i < N; i++){
					
	printf("\nCadastre o nome: ");
	fflush(stdin);
	scanf("%s", &funcionario[i].nome);
			
	printf("\nCadastre o numero de horas de trabalho: ");
	fflush(stdin);
	scanf("%i", &funcionario[i].horas_trab);
				
	printf("\nInforme o turno D-diurno ou N-noturno: ");
	fflush(stdin);
	scanf("%c", &funcionario[i].turno);
				
	}// fim do primeiro for
	break;
				
	case 2:
		
	system("cls");
	printf("\n==== LISTAR FUNCIONARIO ====\n");
					
	for(i = 0; i < N; i++){
						
		if(funcionario[i].turno == 'D'){
							
		funcionario[i].valor_hora = 0.15 * sal_minimo;
						
		funcionario[i].salario = funcionario[i].valor_hora * funcionario[i].horas_trab;	
						
		tr_diurno++;
						
		media_salarial_d += funcionario[i].salario;
						
		printf("Funcionario: %s\nSalario: %.2f\nTurno: %c\n", funcionario[i].nome, funcionario[i].salario, funcionario[i].turno);
	}
				
		if(funcionario[i].turno == 'N'){
						
		funcionario[i].valor_hora = 0.35 * sal_minimo;
						
		funcionario[i].salario = funcionario[i].valor_hora * funcionario[i].horas_trab;	
						
		tr_noturno++;
						
		media_salarial_n += funcionario[i].salario;
						
		printf("Funcionario: %s\nSalario: %.2f\nTurno: %c\n", funcionario[i].nome, funcionario[i].salario, funcionario[i].turno);
		}	
	}
		
	printf("\nMedia salarial dos trabalhadores noturnos: %.2f\n\n", (media_salarial_n/(int)tr_noturno));
	printf("\nMedia salarial dos trabalhadores diurnos: %.2f\n\n", (media_salarial_d/(int)tr_diurno));
	
	break;
			
	case 3:
		
	system("cls");
	printf("\n====== CONSULTAR FUNCIONARIO ======\n");
					
	maior = funcionario[0].salario;
	menor = funcionario[0].salario;
						
	for(i = 0; i < N; i++){
		
		if(funcionario[i].salario > maior){
			
		indiceMaior = i;
		maior = funcionario[i].salario;
	}
		if(funcionario[i].salario < menor){
			
		indiceMenor = i;
		menor = funcionario[i].salario;
	}
		
	}//fim do terceiro for
	printf("\nO funcionario com maior salario: %s, com salario %.2f, pelo turno %c e com %i horas de trabalho", funcionario[indiceMaior].nome, funcionario[indiceMaior].salario, funcionario[indiceMaior].turno, funcionario[indiceMaior].horas_trab);
	printf("\nO funcionario com menor salario: %s, com salario %.2f, pelo turno %c e com %i horas de trabalho", funcionario[indiceMenor].nome, funcionario[indiceMenor].salario, funcionario[indiceMenor].turno, funcionario[indiceMenor].horas_trab);
	
	break;
			
	case 4: printf("Sessao Encerrada!");
	break;
	
	default: printf("Opcao invalida!");
			
	}//fim do switch
}// fim do while
}
