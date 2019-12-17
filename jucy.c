#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 5

int vlddeposito[N];
int vldsaque[N];
int vldpagamento[N];
int d = 0, p = 0, q = 0;

typedef struct {
  int conta;
  char titular[150];
  float saldo;
  int senha;
} cadastro;

struct transacao {
  int dia;
  int mes;
  int ano;
} extra;


int comparator(const void *p, const void *q){
	cadastro *nome1=(cadastro *) p;
	cadastro *nome2=(cadastro *) q;
	
	int result = strcmp(nome1->titular, nome2->titular);
	
	return result;
}

/*void ordenar(cadastro clientes[]) {
	qsort(clientes, N, sizeof(cadastro), comparator);
}*/

void cadastrar(cadastro clientes[]) {
  system("cls");
  int i;

  for (i = 0; i < N; i++) {

    printf("\n********** Cadastro de Clientes **********\n");

    printf("\nNome: ");
    fflush(stdin);
    gets(clientes[i].titular);

    printf("Conta: ");
    scanf("%d", &clientes[i].conta);

    printf("Senha: ");
    scanf("%d", &clientes[i].senha);

    printf("Saldo: ");
    scanf("%f", &clientes[i].saldo);
  }
}

void alterar(cadastro clientes[]) {
  system("cls");

  int i;
  char nome[150];

  printf("Nome do titular da conta: ");
  fflush(stdin);
  gets(nome);

  for (i = 0; i < N; i++) {

    if (strcmp(clientes[i].titular, nome) == 0) {

      system("cls");
      printf("\n Informe os novos dados: ");

      printf("\nNome: ");
      fflush(stdin);
      gets(clientes[i].titular);

      printf("Senha: ");
      fflush(stdin);
      scanf("%d", &clientes[i].senha);

			printf("\n DADOS ALTERADOS COM SUCESSO!");
    }
  }
}

void pesquisar(cadastro clientes[]) {
  system("cls");
  int i;
  char nome[150];

  printf("Nome do titular da conta: ");
  fflush(stdin);
  scanf("%s", &nome);

  for (i = 0; i < N; i++) {

    if (strcmp(clientes[i].titular, nome) == 0) {
      system("cls");
      printf("Titular: %s\nConta: %d\nSaldo: R$%.2f\n",
             strupr(clientes[i].titular), clientes[i].conta, clientes[i].saldo);
    }
  }
}

void excluir(cadastro clientes[]) {

  system("cls");
  int i;
  char nome[150], resposta;

  printf("Nome do titular da conta: ");
  fflush(stdin);
  gets(nome);

  for (i = 0; i < N; i++) {

    if (strcmp(clientes[i].titular, nome) == 0) {

      printf("\nDeseja excluir cadastro? S/N: ");
      fflush(stdin);
      scanf("%c", &resposta);

      if (resposta == 'S') {

     	strcpy(clientes[i].titular, "Conta Excluida");
		clientes[i].conta = 0;
		clientes[i].saldo = 0;
		clientes[i].senha = 0;
	
        printf("\nDados Apagados!\n");
      } else {

        printf("\nExclusao Cancelada!\n");
      }
    }
  }
  system("cls");
}

void listar(cadastro clientes[]) {
  system("cls");
  qsort(clientes, N, sizeof(cadastro), comparator);
  int i;

  for (i = 0; i < N; i++) {

    printf("\n********** Listagem de Clientes **********\n");

    printf("Nome: %s\nConta: %d\nSaldo: %.2f", strupr(clientes[i].titular),
           clientes[i].conta, clientes[i].saldo);
  }
}

void deposito(cadastro clientes[]) {
  system("cls");
  int i, num;

  printf("\n********** DEPOSITOS **********\n");

  printf("\nInforme o numero da conta: ");
  scanf("%d", &num);

  printf("\nInforme o valor do depoisto: ");
  scanf("%d", &vlddeposito[d]);

  for (i = 0; i < N; i++) {

    if (num == clientes[i].conta) {

      clientes[i].saldo = clientes[i].saldo + vlddeposito[d];

      printf("\nSaldo atual de %s: %.2f\n", strupr(clientes[i].titular),
             clientes[i].saldo);
    }
  }
}

void saque(cadastro clientes[]) {
  system("cls");
  int i, num;

  printf("\n********** SAQUES **********\n");

  printf("\nInforme o numero da conta: ");
  scanf("%d", &num);

  printf("\nInforme o valor do saque: ");
  scanf("%d", &vldsaque[q]);

  for (i = 0; i < N; i++) {

    if (num == clientes[i].conta) {

      clientes[i].saldo = clientes[i].saldo - vldsaque[q];

      printf("\nSaldo atual de %s: %.2f\n", strupr(clientes[i].titular),
             clientes[i].saldo);
    }
  }
}

void pagamento(cadastro clientes[]) {
  system("cls");
  int i, num, num2;

  printf("\n********** PAGAMENTOS **********\n");

  printf("\nInforme o numero da conta: ");
  scanf("%d", &num);

  printf("\nInforme o numero da conta para realizar o pagamento: ");
  scanf("%d", &num2);

  printf("\nInforme o valor do pagamento: ");
  scanf("%d", &vldpagamento[p]);

  for (i = 0; i < N; i++) {

    if (num == clientes[i].conta) {

      clientes[i].saldo = clientes[i].saldo - vldpagamento[p];

      printf("\nSaldo atual de %s: %.2f\n", strupr(clientes[i].titular),
             clientes[i].saldo);
    }

    if (num2 == clientes[i].conta) {

      clientes[i].saldo = clientes[i].saldo + vldpagamento[p];

      // printf("\nSaldo atual de %s: %.2f\n", clientes[i].titular,
      // clientes[i].saldo);
    }
  }
}

void extrato(struct transacao extra[], cadastro clientes[]) {
  system("cls");
  char data[9];
  int i, num;
  _strdate(data);

  printf("\n Informe o numero da conta: ");
  scanf("%d", &num);

  for (i = 0; i < N; i++) {

    if (num == clientes[i].conta) {

      printf("\n========== EXTRATO ==========\n");
      printf("--------------------------------\n");
      printf("\nNome: %s",strupr(clientes[i].titular));
      printf("\nConta: %d",clientes[i].conta);
      printf("\nData: %s\n",data);
      printf("--------------------------------\n");
      printf("\n\t Atividades Recentes\n\t");
      printf("\nSaldo Disponivel:\t\t\t R$%.2f\n",clientes[i].saldo = clientes[i].saldo - vldsaque[q]);
      printf("\nValor do ultimo saque:\t\t\t R$%d\n",vldsaque[q]);
      printf("\nValor do ultimo deposito:\t\t R$%d\n",vlddeposito[d]);
      printf("\nValor do ultimo pagamento:\t\t R$%d\n",vldpagamento[p]);
    }
  }
}

int autenticar() {
  int senha, tentativas = 0;
  system("cls");

  for (tentativas = 0; tentativas == 0; tentativas--) {

    printf("\n\t\t\tBEM VINDO AO BANCO DA UPE\n\n");

    printf("Insira sua senha para iniciar: \n");
    scanf("%d", &senha);

    if (senha == 123456) {
      printf("Acesso permitido!\n");
      system("PAUSE");
      system("cls");
    }else{
    	printf("Senha invalida, tente novamente!");
	}
  }
}

int main(int argc, char **argv) {
  system("color 3F");
  FILE *entrada, *conta;
  cadastro *clientes = malloc(N * sizeof(cadastro));
  struct transacao extra[N];
  int i, op; 

  entrada = fopen("cadastro.txt", "a+");
  conta = fopen("extra.txt", "a+");

  autenticar();

  while (op >= 0) {

    enum Menu {Cadastro = 1, Alteracao, Pesquisa, Apagar, Listagem, Deposito, Saque, Pagamento, Extrato, Sair};

    enum Menu opcoes;

    printf("\n************ Menu De Opcoes ************\n");

    printf("Cadastrar  Alterar  Pesquisar  Excluir  Listar  Deposito  Saque  Pagamento  Extrato  Sair\n");
    scanf("%d", &opcoes);
    system("cls");
    switch (opcoes) {

    case Cadastro:
      cadastrar(clientes);
      break;

    case Alteracao:
      alterar(clientes);
      break;

    case Pesquisa:
      pesquisar(clientes);
      break;

    case Apagar:
      excluir(clientes);
      break;

    case Listagem:
      listar(clientes);
      break;

    case Deposito:
      deposito(clientes);
      break;

    case Saque:
      saque(clientes);
      break;

    case Pagamento:
      pagamento(clientes);
      break;

    case Extrato:
      extrato(extra, clientes);
      break;

    case Sair:
      printf("\nEncerrado...");
      op = -1;
      break;

    default:
      printf("\nTente Novamente...");
    }
  }

  for(i = 0; i < N; i++){
    fprintf(entrada, "Nome: %s, ",strupr(clientes[i].titular));
    fprintf(entrada, "Conta: %d, ",clientes[i].conta);
    fprintf(entrada, "Senha: %d, ",clientes[i].senha);
    fprintf(entrada, "Saldo: R$ %.2f\n",clientes[i].saldo);

    fprintf(conta, "Nome: %s, ",strupr(clientes[i].titular));
    fprintf(conta, "Conta: %d, ",clientes[i].conta);
    fprintf(conta, "Saldo Disponivel: R$ %.2f, ",clientes[i].saldo = clientes[i].saldo - vldsaque[q]);
    fprintf(conta, "Valor do ultimo saque: R$ %d, ",vldsaque[q]);
    fprintf(conta, "Valor do ultimo deposito: R$ %d, ",vlddeposito[d]);
    fprintf(conta, "Valor do ultimo pagamento: R$ %d\n", vldpagamento[p]);
  }

  fclose(entrada);
  fclose(conta);
  return 0;
}
