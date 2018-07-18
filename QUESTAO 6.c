/* calcular a maior e menor altura do grupo
a media de altura das mulheres
o numero de homens 
o sexo da pessoa mais alta */

#include<stdio.h>

main(){
	
	int i;
	int m = 0;
	int f = 0;
	char sexo, sexo_altura;
	float altura, maior, menor, media_altura_mulheres;
	
	for(i = 0; i < 5; i++){
		
		printf("--------------------------");
		printf("\nQual o sexo m ou f? ");
		scanf(" %c", &sexo);
		
		printf("\nQual a altura: ");
		scanf("%f", &altura);
		
		switch(sexo){
			
			case 'm': m++; /*somando o numero de homens */
			break;
			
			case 'f': f++; /* somando o numero de mulheres */
			
			media_altura_mulheres = media_altura_mulheres + altura;
			break; 
			
			default: printf("ERROR!");
			break;
		}
		
		if(altura > maior){
			
			maior = altura;
			
		}
	}
		/* sabendo qual o sexo da altura maior */
		
		if(sexo == 'm'){
			
			sexo_altura = sexo;
			
		} else{
			
			sexo_altura = sexo;
		}
		
	if(altura < 2.0){
		
		menor = altura;
	}

	/*pega a soma das alturas M e divide pelo total */
	media_altura_mulheres = media_altura_mulheres / f;
	
	printf("-------------------------------------");
	printf("\nMaior altura: %.2f\n", maior);
	printf("\nMenor altura: %.2f\n", menor);
	printf("\nMedia das alturas das mulheres: %.2f\n", media_altura_mulheres);
	printf("\nTotal de homens: %d\n", m);
	
	if(sexo_altura == 'm'){
		
		printf("\nO sexo da pessoa mais alta e Masculino\n");
		
	} else{
		
		printf("\nO sexo da pessoa mais alta e Feminino\n");
	}
	
}
