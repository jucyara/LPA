/*6.Escreva uma fun��o que recebe, por par�metro, dois valores X e Z e
calcula e retorna X z . (sem utilizar fun��es ou operadores de pot�ncia
prontos)*/

#include<stdio.h>

int pot(int x, int z){ 

   int i, result = 1;  
   
   for (i = 0; i < z; i++) 
   
      result *= x; 
      
   return(result); 
} 

int main() { 
   int i, j; 
   
   printf("Informe um numero e o expoente: "); 
   scanf("%d %d", &i, &j); 
   
   printf("%d ^ %d = %d\n", i, j, pot(i, j)); 
}
