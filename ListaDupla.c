#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
	int numero;
	struct NO *anterior, *proximo;
}Lista_Dupla;


void Menu();
int verificar_vazia(Lista_Dupla *cabeca);
Lista_Dupla *New_NO(int numero);
Lista_Dupla *New_Lista(int numero);
Lista_Dupla *New_Lista(int numero);
Lista_Dupla *PesquisaNumero(Lista_Dupla *cabeca, int numero);
Lista_Dupla *InsereElemento(Lista_Dupla *cabeca, int numero);
Lista_Dupla *RemoveElemento(Lista_Dupla *cabeca, int numero);
void ListarCrescente(Lista_Dupla *cabeca);
void ListarDecrescente(Lista_Dupla *cabeca);
int ApagarLista(Lista_Dupla *cabeca);


//MAIN
int main(int argc, char **argv){

	Lista_Dupla *cabeca = NULL;
	char opcao = 0;
	int numero;

	while (1){
		Menu();
		fflush(stdin);
		opcao = getchar();

		switch (opcao){
		case '1'://Verifica Lista Vazia
			if (verificar_vazia(cabeca)){
				printf("\n A lista está vazia.\n\n");
				system("pause");
				system("cls");
			}
			else{
				printf("\n A lista não está vazia.\n\n");
				system("pause");
				system("cls");
			}
			break;


		case '2'://Cria lista
			if (verificar_vazia(cabeca)){
				printf("\n Digite o primeiro elemento da lista:\n\n");
				fflush(stdin);
				scanf("%d", &numero);
				cabeca = New_Lista(numero);
				printf("\n A lista foi criada.\n\n");
				system("pause");
				system("cls");
			}
			else{
				printf("\n Já existe uma lista criada.\n\n");
				system("pause");
				system("cls");
			}
			break;

		case '3'://Adicionar elemento
			if (!verificar_vazia(cabeca)){
				printf("\n Digite o valor desejado para o elemento:\n\n");
				scanf("%d", &numero);

				if (PesquisaNumero(cabeca, numero) == NULL){
					cabeca = InsereElemento(cabeca, numero);
					printf("\n Elemento foi adicionado.\n\n");
					system("pause");
                    system("cls");
				}
				else{
					printf("\n Elemento já se encontra na lista.\n\n");
					system("pause");
                    system("cls");
				}
			}
			else{ printf("\n A lista está vazia.\n\n"); }

			break;

		case '4'://Remove elemento
			if (!verificar_vazia(cabeca)){
				printf("\n Digite o valor do elemento:\n\n");
				scanf("%d", &numero);

				if (PesquisaNumero(cabeca, numero) != NULL){
					cabeca = RemoveElemento(cabeca, numero);
					printf("\n O elemento foi removido.\n");
					system("pause");
                    system("cls");
				}
				else{ printf("\n O elemento não existe.\n"); }
                    system("pause");
                    system("cls");
			}
			else{ printf("\n A lista está vazia.\n"); }
                system("pause");
                system("cls");
			break;

		case '5'://Pesquisa lista
			if (!verificar_vazia(cabeca)){
				printf("\n Digite o valor do elemento que deseja pesquisar:\n\n");
				scanf("%d", &numero);

				if (PesquisaNumero(cabeca, numero) != NULL){
					printf("\n Elemento encontrado.\n\n");
					system("pause");
                    system("cls");
				}
				else { printf("\n Elemento não encontrado.\n\n"); }
                    system("pause");
                    system("cls");
			}
			else { printf("\n A lista não possui elementos.\n\n"); }
                system("pause");
				system("cls");
			break;

		case '6'://Ordenar crescente
			if (!verificar_vazia(cabeca)){
                ListarCrescente(cabeca);
							}
			else { printf("\n A lista não possui elementos.\n\n"); }
                system("pause");
				system("cls");
			break;

		case '7'://Ordenar descrescente
			if (!verificar_vazia(cabeca)){
				ListarDecrescente(cabeca);
			}
			else { printf("\n A lista não possui elementos.\n\n"); }
                system("pause");
				system("cls");
			break;

		case '8'://Apaga lista

			if (!verificar_vazia(cabeca)){
				printf("\n Foram liberados -> %d NOS. \n\n", ApagarLista(cabeca));
				system("pause");
				system("cls");
			}
			return 0;
			break;
		default: printf("\ Opção inválida!\n\n");
                system("pause");
				system("cls");
			break;
		}
	}

	return 0;
}


void Menu(){
    printf("\n   MENU \n\n" );
	printf( "   1- Verificar Lista              \n" );
	printf( "   2- Criar Lista                        \n" );
	printf(	"   3- Inserir elemento                   \n" );
	printf(	"   4- Remover elemento                   \n" );
	printf(	"   5- Pesquisar elemento                 \n" );
	printf(	"   6- Listar em ordem crescente          \n" );
	printf(	"   7- Listar em ordem decrescente        \n" );
	printf(	"   8- Sair  \n" );
	printf("\n   Digite a opção desejada:");
}


int verificar_vazia(Lista_Dupla *cabeca){
	if (cabeca == NULL){
		return 1;
	}
	return 0;
}


Lista_Dupla *New_NO(int numero){
	Lista_Dupla *New_NO = (Lista_Dupla*)malloc(sizeof(Lista_Dupla));
	New_NO->numero = numero;
	New_NO->anterior = NULL;
	New_NO->proximo = NULL;

	return New_NO;
}


Lista_Dupla *New_Lista(int numero){
	return New_NO(numero);
}


Lista_Dupla *PesquisaNumero(Lista_Dupla *cabeca, int numero){//Pesquisa um número
	Lista_Dupla *temp = cabeca;

	while (temp != NULL){
		if (temp->numero == numero){//Se o conteudo do nó for o mesmo do pesquisado retorna a posição do nó, para que o valor do elemento seja extraido
			return temp;
		}
		temp = temp->proximo;
	}
	return NULL;
}


Lista_Dupla *InsereElemento(Lista_Dupla *cabeca, int numero){

	Lista_Dupla *temp = cabeca, *novoElemento, *cauda = NULL;

	novoElemento = New_NO(numero);

	while (temp != NULL){
		if (temp->numero > numero){
			novoElemento->anterior = temp->anterior;
			novoElemento->proximo = temp;
			novoElemento->numero = numero;

			if (temp->anterior != NULL){
				temp->anterior->proximo = novoElemento;
			}
			temp->anterior = novoElemento;

			if (temp == cabeca){
				return novoElemento;
			}
			else{
				return cabeca;
			}
		}

		cauda = temp;
		temp = temp->proximo;
	}

	novoElemento->anterior = cauda;
	cauda->proximo = novoElemento;
	novoElemento->numero = numero;

	return cabeca;
}

Lista_Dupla *RemoveElemento(Lista_Dupla *cabeca, int numero){//Remove um elemento da lista

	Lista_Dupla *elemento_removivel = PesquisaNumero(cabeca, numero);
	Lista_Dupla *novaCabeca;
	if (elemento_removivel != NULL){

		if (elemento_removivel->anterior == NULL){

			if (elemento_removivel->proximo == NULL){
				free(elemento_removivel);
				return NULL;
			}
			else{
				elemento_removivel->proximo->anterior = NULL;
				novaCabeca = elemento_removivel->proximo;
				free(elemento_removivel);
				return novaCabeca;
			}
		}
		else{
			elemento_removivel->anterior->proximo = elemento_removivel->proximo;
			if (elemento_removivel->proximo != NULL){
				elemento_removivel->proximo->anterior = elemento_removivel->anterior;
			}
			free(elemento_removivel);
		}
	}
	return cabeca;
}

void ListarCrescente(Lista_Dupla *cabeca){
	Lista_Dupla *elementos = cabeca;
        printf ("\n  Elementos em Ordem Crescente:\n");
	while (elementos != NULL){
		printf(" %d ", elementos->numero);
        elementos = elementos->proximo;
	}
	printf("\n");
}

void ListarDecrescente(Lista_Dupla *cabeca){
	Lista_Dupla *elementos = cabeca, *rabo;
	while (elementos->proximo != NULL){
		elementos = elementos->proximo;
	}
        printf ("  Elementos em Ordem Decrescente:\n");
	while (elementos != NULL){
		printf(" %d ", elementos->numero);
        elementos = elementos->anterior;
	}
	printf("/n");
}

int ApagarLista(Lista_Dupla *cabeca){//destroi toda a lista
	Lista_Dupla *elemento = cabeca, *anterior;
	int total_de_NOS = 1;

	while (elemento->proximo != NULL){
		elemento = elemento->proximo;
		total_de_NOS++;
	}

	while (elemento != NULL){
		anterior = elemento->anterior;
        if(anterior!= NULL){
            anterior->proximo = NULL;
        }
		free(elemento);
		elemento = anterior;
	}
	return total_de_NOS;
}

