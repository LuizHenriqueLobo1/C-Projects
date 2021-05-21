#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *prox;
}No;

void criarNoComValor(No **lista, int num);
void imprimirListaEncadeada(No *lista);

int main() {

	No *lista;
	lista = NULL;

	for(int i = 0; i < 10; i++)
		criarNoComValor(&lista, i+1);

	imprimirListaEncadeada(lista);

	return 0;
}

void criarNoComValor(No **lista, int num) {

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

	printf("\nVALORES DA LISTA\n");
	while(aux != NULL) {
		printf("%d\n", aux->valor);
		aux = aux->prox;
	}
}