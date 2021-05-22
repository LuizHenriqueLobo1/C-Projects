#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *prox;
}No;

void inserirNaListaEncadeada(No **lista, int num);
void imprimirListaEncadeada(No *lista);
int menu();

int main() {

	No *lista;
	lista = NULL;

	int loop = 1;
	int opcao;
	int valor;

	while(loop == 1) {

		opcao = menu();

		switch(opcao) {

			case 0: {
				printf("\nPROGRAMA ENCERRADO\n");
				loop = 0;
				break;
			}

			case 1: {
				printf("\nDIGITE O VALOR: ");
				scanf("%d", &valor);
				inserirNaListaEncadeada(&lista, valor);
				break;
			}

			case 2: {
				printf("\nVALORES DA LISTA\n");
				imprimirListaEncadeada(lista);
				break;
			}

			default: {
				printf("\nOPCAO INVALIDA\n");
				break;
			}
		}
	}

	return 0;
}

void inserirNaListaEncadeada(No **lista, int num) {

	No *p;
	p = (No*)malloc(sizeof(No));

	if(p == NULL)
		printf("\nERRO NA ALOCACAO\n");
	else {
		p->valor = num;
		p->prox = *lista;
		*lista = p;
	}
}

void imprimirListaEncadeada(No *lista) {

	No *aux = lista;

	while(aux != NULL) {
		printf("%d\n", aux->valor);
		aux = aux->prox;
	}
}

int menu() {

	int opcao;

	printf("\n-------- MENU --------");
	printf("\n0. SAIR");
	printf("\n1. INSERIR NA LISTA");
	printf("\n2. IMPRIMIR LISTA");
	printf("\n----------------------");
	printf("\n> ");
	scanf("%d", &opcao);

	return opcao;
}