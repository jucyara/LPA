#include<stdio.h>

int main(){

   int cont, temp, i, j, *vetor = 0, loop=0;

   printf("Quantos elementos serao inseridos?: ");
   scanf("%d",&cont);
   
   vetor = (int*) malloc(sizeof(int*)*cont); //define o tamanho do vetor alocando espaço de memória

   for(i = 0; i < cont; i++){
   	printf("\nElemento %d: ", i+1); // insere os elementos no vetor
   	scanf("%d",&vetor[i]);
   }
   
   printf("\nVetor original: ");
   for(i = 0; i < cont; i++){    //imprime o vetor original desordenado
   	printf("[%d]",vetor[i]);
   }

   
   for(i = cont-2; i >= 0; i--){ // compara o vetor dois a dois
   	  int g = 1;
      for(j = 0; j <= i; j++){
      	
        if(vetor[j] > vetor[j+1]){  // o elemento da posição de j é maior que o da posição de j+1? se sim,
           temp=vetor[j];  //realiza a troca 
           vetor[j]=vetor[j+1]; //reordena-se o vetor
           vetor[j+1]=temp; // realiza uma iteração por completo, e repete novamente
           g = 0;
        }
        
      }
      loop++; // conta o número de comparações necessárias para ordenar o vetor
      if(g == 1){
      	break;
	  }
   }

   printf("\nVetor ordenado: ");
   for(i = 0; i < cont; i++){   // imprime o vetor ordenado
   	printf("[%d]",vetor[i]);
   }
   
    //printf("\n\nO vetor possui %d posicoes, mas somente %d posicoes foram ocupadas!\n", (int)(sizeof(vetor) / sizeof(vetor[0])), cont);
    
    printf("\n\nO vetor possui %d posicoes!\n", cont); //exibe o quantidade de vezes que o algoritmo foi executado para a ordenação
	
	printf("\nO algoritmo foi executado %d vezes!", loop);
   return 0;
}
