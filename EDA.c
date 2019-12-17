#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int dado;
	struct no *proximo;
}PilhaSimples;


int PilhaVazia(PilhaSimples*topo){ //função que vai verificar se a pilha está vazia
	if (topo == NULL){
		return 1;
	}
	return 0;
}

PilhaSimples *NO(int dado){// cria um novo nó
	PilhaSimples *no = (PilhaSimples*)malloc(sizeof(PilhaSimples));
	no->proximo = NULL;
	no->dado = dado;
	return no;
}

PilhaSimples *Pilha(int dado){//  cria uma nova pilha.
	return NO(dado);
}

PilhaSimples *Empilha(PilhaSimples *topo, int novo){
	
	PilhaSimples *novoTopo = NO(novo);
	
	novoTopo->proximo = topo;
	
	return novoTopo;
}

int *Desempilha(PilhaSimples *topo){
	
	int dado = topo->dado;
	*topo = *(topo->proximo);
	
	return dado;
}

void listaDeElementos(PilhaSimples *topo){// lista todos os elementos
	PilhaSimples *proximo = topo;

	while (proximo != NULL){
		printf(" %d \n", proximo->dado);
		proximo = proximo->proximo;
	}
}

int destroiPilha(PilhaSimples *topo){//destroi  pilha
	PilhaSimples *topoAnterior = topo, *novo_Topo;
	
	int qtd_Elem = 0;
	
	while (topoAnterior != NULL){
		novo_Topo = topoAnterior->proximo;
		free(topoAnterior);
		topoAnterior = novo_Topo;
		qtd_Elem++;
	}

	return qtd_Elem;
}


int PilhaVazia(PilhaSimples*topo);
PilhaSimples *NO(int dado);
PilhaSimples *Pilha(int dado);
PilhaSimples *Empilha(PilhaSimples *topo, int novo);
int *Desempilha(PilhaSimples *topo);
void listaDeElementos(PilhaSimples *topo);
int destroiPilha(PilhaSimples *topo);


int main(int argc, char **argv){
	
	PilhaSimples *topo = NULL;
	int dado, op;
	
	while(op >= 0){
	
	enum Menu{Pilha_Vazia = 1, Criar_Pilha, Empilhar, Desempilhar, Listar, Destruir_Pilha};
	enum Menu opcao;
	
	printf("\n************ Menu De Opcoes ************\n");

    printf("Pilha_Vazia  Criar_Pilha  Empilhar  Desempilhar  Listar  Destruir_Pilha\n");
    scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			if (PilhaVazia(topo)){
				printf("\nPilha vazia\n\n");
			}
			else{ 
				printf("\nPilha nao vazia\n\n"); 
			}
		break;
			
		case 2:
			if (PilhaVazia(topo)){ 
			
				printf("\nInsira o primeiro elemento da pilha: \n");
				scanf("%d", &dado);
				
				topo = Pilha(dado);
				printf("\nPilha Criada\n\n");
			}
			else{ 
				
				printf("\nA pilha ja existe\n\n"); 
			}
		break;
			
		case 3:
			
			if (!PilhaVazia(topo)){
				
				printf("\nInsira o valor do novo elemento\n");
				scanf("%d", &dado);
				
				topo = Empilha(topo, dado);
				
				printf("\nElemento Criado\n\n");
			}
			else{ 
				printf("\nPilha nao existe\n\n"); 
			}
		break;
			
		case 4:
			if (!PilhaVazia(topo)){
				printf("\n %d Elementos desempilhados \n\n", Desempilha(topo));
			}
			else{ 
			
				printf("\nPilha nao existe\n\n"); 
			}
		break;
		
		case 5:
			
			if (!PilhaVazia(topo)){
				
				listaDeElementos(topo);
			}
			else{ 
			
				printf("\nPilha nao existe\n\n"); 
			}
		break;
		
		case 6:
			if (!PilhaVazia(topo)){
				
				printf("\n %d Elementos excluidos\n\n", destroiPilha(topo));
				
			} 
	
		op = -1;
		break;
		
		default: printf("\nOpcao invalida!\n\n");
		break;
	}
}
return 0;
}






