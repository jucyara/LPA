/*Uma loja XXX o pre�o do produto teve um desconto, ambos ser�o fornecidos pelo funcion�rio
da loja XXX. Calcular e exibir o valor do desconto e o valor final do produto com desconto. */

#include<stdio.h>

float precoProduto;
float desconto;


main(){
	printf("Informe o preco do produto: ");
	scanf("%f", &precoProduto);
	
	printf("Informe o percentual de desconto: ");
	scanf("%f", &desconto);
	
	desconto = (precoProduto * desconto)/100;
	
	precoProduto = precoProduto - desconto;
	
	printf("O valor final do produto com desconto sera: R$%.2f", precoProduto);
}
