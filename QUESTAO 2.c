#include<stdio.h>
//
main(){
	
	int refeicao, aluno = 0, aluno_menor10 = 0, aluno_entre10e20 = 0, aluno_maior20 = 0;
		
	do{
		printf("------------------------------");
		printf("\nInforme quantas refeicoes voce fez: ");
		scanf("%d", &refeicao);
		
		if(refeicao < 10){
			
			aluno_menor10++;
			
		} else if((refeicao >= 10) && (refeicao <= 20)){
			
			aluno_entre10e20++;
			
		} else  if(refeicao > 20){
			
			aluno_maior20++;
			
		} if (refeicao != 0){
			
			aluno++;
		}
		
		printf("\ninforme sua opcao: <1>  p/continuar ou <0> p/sair: ");
		scanf("%d", &refeicao);
		
	} while(refeicao != 0);
	
	
	printf("\nQuantidade de alunos entrevistados foi: %d\n", aluno);
	printf("\nQuantidade de alunos que fez menos de 10 refeicoes: %d", aluno_menor10);
	printf("\nQuantidade de alunos que fez entre 10 e 20 refeicoes: %d\n", aluno_entre10e20);
	printf("Quantidade de alunos que fez mais de 20 refeicoes: %d", aluno_maior20);
	
}
