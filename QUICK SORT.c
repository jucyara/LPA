#include<stdio.h>

void quicksort(int vetor[25],int min,int max, int *loop){
	
   int down, up, pivot, temp;

   if(min < max){
   	
      pivot=min; //será o elemento da soma do inicio com o fim e dividido por 2
      down = min; //define o inicio do vetor
      up = max; //define o fim do vetor

      while(down < up){
      	
         while(vetor[down]<=vetor[pivot]&&down<up) // separa os menores dos maiores
            down++;
            
         while(vetor[up]>vetor[pivot]) // separa os maiores dos menores
            up--;
            
         if(down < up){
         	
            temp=vetor[down]; //achado o primero valor para down, temp armazena o valor
            vetor[down]=vetor[up]; // realiza-se a troca
            vetor[up]=temp; // temp passa o valor armazenado para a posição de up
         }
         
      }
      
      (*loop)++; //ponteiro que conta o número de comparações para a ordenação do vetor

      temp=vetor[pivot]; // realizada a troca, realiza-se um avanço até o centro
      vetor[pivot]=vetor[up]; // procura por um elemento maior que o pivo
      vetor[up]=temp;
      quicksort(vetor,min,up-1, loop);
      quicksort(vetor,up+1,max, loop);

   }
}

int main(){
	
   int i, cont, *vetor = 0, loop = 0;
	
   printf("Quantos elementos serao inseridos?: ");
   scanf("%d",&cont);

   vetor = (int*) malloc(sizeof(int*)*cont); //alocação dinâmica para especificar o tamanho do vetor

   for(i = 0; i < cont; i++){
   	printf("\nElemento %d: ", i+1); //insere os elementos no vetor
   	scanf("%d",&vetor[i]);
   }
   
   printf("\nVetor original: ");
   for(i = 0; i < cont; i++){  //imprime o vetor original desordenado
   	printf("[%d]",vetor[i]);
   }

   quicksort(vetor,0,cont-1, &loop); //realiza a ordenação
	
   printf("\nVetor ordenado: ");
   for(i = 0; i < cont; i++){  // gera o novo vetor ordenado
   	printf("[%d]",vetor[i]);
   }
    
    //printf("\n\nO vetor possui %d posicoes, mas somente %d posicoes foram ocupadas!\n", (int)(sizeof(vetor) / sizeof(vetor[0])), cont);
    
    printf("\n\nO vetor possui %d posicoes!\n", cont); //exibe o quantidade de vezes que o algoritmo foi executado para a ordenação
	
	printf("\nO algoritmo foi executado %d vezes!", loop);
   return 0;
}
