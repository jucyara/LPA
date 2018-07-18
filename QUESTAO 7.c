#include<stdio.h>

main(){
	
	int i;
	int voto;
	int candidato1 = 0;
	int candidato2 = 0;
	int candidato3 = 0;
	int voto_nulo = 0;
	int voto_branco = 0;
	float pe_branco, pe_nulo;
	
	for(i = 0; i <= 10; i++){
		
		printf("Qual o seu voto? \n");
		printf("1-Candidato\n");
		printf("2-Candidato\n");
		printf("3-Candidato\n");
		printf("4-Voto nulo\n");
		printf("5-Voto branco\n");
		scanf("%d", &voto);
		
		/*Somando o voto de cada candidato */
		switch(voto){
			
			case 1: candidato1++;
			break;
			
			case 2: candidato2++;
			break;
			
			case 3: candidato3++;
			break;
			
			case 4: voto_nulo++;
			break;
			
			case 5: voto_branco++;
			break;
			
			default: printf("ERROR - Numero invalido!");
			i--; /* Decremento do i porque o codigo foi invalido, assim ele não conta loop. */
			break;		
	   }
	}
	/*Percentagem de brancos e nulos. */
	pe_branco = (voto_branco * 100)/10;
	pe_nulo = (voto_nulo * 100)/10;
	
	printf("Total de votos primeiro candidato - %d\n", candidato1);
	printf("Total de votos segundo candidato - %d\n", candidato2);
	printf("Total de votos terceiro candidato - %d\n", candidato3);
	printf("Total de votos brancos - %d\n", voto_branco);
	printf("Total de votos nulos - %d\n", voto_nulo);
	printf("Percentagem de votos brancos - %.2f\n", pe_branco);
	printf("Percentagem de votos nulos - %.2f\n", pe_nulo);
}
