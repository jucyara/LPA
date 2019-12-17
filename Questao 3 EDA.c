#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct no{
	int dado;
	struct no *proximo;
}FilaSimples;

FilaSimples *NO(int dado);
FilaSimples *Fila(int dado);

void Menu(){//Funcao Menu

    printf("|--------------------|MENU|--------------------|\n" );
	printf( "   1 - Verificar fila vazia               \n" );
	printf( "   2 - Criar fila                         \n" );
	printf(	"   3 - Enfileirar                         \n" );
	printf(	"   4 - Desenfileirar                      \n" );
	printf(	"   5 - Listar Elementos da fila           \n" );
	printf(	"   6 - Sair e finalizar fila              \n" );
	printf( " |------------------------------------------|\n" );
	printf("Entre com um numero: ");
	
}

int verificar_Fila(FilaSimples*comeco){
	if (comeco == NULL){
		return 1;
	}
	return 0;
}

FilaSimples *NO(int dado){
	FilaSimples *no = (FilaSimples*)malloc(sizeof(FilaSimples));
	no->proximo = NULL;
	no->dado = dado;
	return no;
}

FilaSimples *Fila(int dado){//Cria uma nova Fila.
	return NO(dado);
}

void enfileirar(FilaSimples *comeco, int dado){//Enfileira um numero
	FilaSimples *novo_Elemento = NO(dado), *Rabo = comeco;
	while (Rabo!= NULL){
		if (Rabo->proximo == NULL){
			Rabo->proximo = novo_Elemento;
			break;
		}
		Rabo = Rabo->proximo;
	}
}

int desenfileirar(FilaSimples *comeco){
	int dado = comeco->dado;
	*comeco = *(comeco->proximo);
	return dado;
}

void ListarFila(FilaSimples *comeco){//lista todos os elementos da pilha.
	FilaSimples *proximo = comeco;
	printf("Primeiro <");
	while (proximo != NULL){
		printf("%d", proximo->dado);
		proximo = proximo->proximo;
	}
	printf("> Ultimo\n\n");
}

int excluir_Fila(FilaSimples *comeco){
	FilaSimples *comecoAnterior = comeco, *novoComeco;
	int quant_Elem = 0;

	while (comecoAnterior != NULL){
		novoComeco = comecoAnterior->proximo;
		free(comecoAnterior);
		comecoAnterior = novoComeco;
		quant_Elem++;
	}

	return quant_Elem;
}

int main(int argc, char **argv){

	FilaSimples *comeco = NULL;
	char menu;
	int dado;

	while (1){
		Menu();
		fflush(stdin);
		menu = getchar();

		switch (menu){
		case '1': 
			if (verificar_Fila(comeco)){
				printf("\nFila vazia\n\n");
			}
			else{ printf("\nFila nao vazia\n\n"); }
			break;
		case '2':
			if (verificar_Fila(comeco)){
				printf("\nInsira o valor do elemento\n");
				scanf("%d", &dado);
				comeco = Fila(dado);
				printf("\nFila Criada\n\n");
			}
			else{ printf("\nA Fila ja foi criada\n");
			}
			break;
		case '3':
			if (!verificar_Fila(comeco)){
				printf("\nInsira o valor do elemento\n");
				scanf("%d", &dado);
				enfileirar(comeco, dado);
				printf("\nElemento Criado\n\n");
			}
			else{ printf("\nA Fila nao foi criada\n\n"); }
			break;
		case '4':
			if (!verificar_Fila(comeco)){
				printf("\nElemento  %d desenfileirado \n\n", desenfileirar(comeco));
			}
			else{ printf("\nA Fila nao foi criada\n\n"); }
			break;	
		case '5':
			if (!verificar_Fila(comeco)){
				ListarFila(comeco);
			}
			else{ printf("\nA Fila nao foi criada\n\n"); }

			break;
		case '6':
			if (!verificar_Fila(comeco)){
				printf("\n %d Elementos removidos\n\n", excluir_Fila(comeco));
			} return 0;
			break;
		default: printf("\nescolha invalida\n\n");
			break;
		}
	}
	return 0;
}
