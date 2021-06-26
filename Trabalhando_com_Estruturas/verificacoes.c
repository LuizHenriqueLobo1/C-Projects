#include <stdio.h>

#include "estruturas.h"

int verificaEspacoEstruturaPrincipal(estrutura vetorPrincipal[]) {

	int retorno;
	int i;
	int contador = 0;

	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].tamEstruturaAux > 0)
			contador++;
	}

	if(contador == TAM)
		retorno = 0;
	else if(contador == 0)
		retorno = 1;
	else
		retorno = -1;

	return retorno;
}

int verificaPosicaoParaCriar(estrutura vetorPrincipal[], int posicao) {

	while(1) {
		if(posicao < 1 || posicao > 10 || vetorPrincipal[posicao-1].tamEstruturaAux > 0) {
			printf("\nPOSICAO INVALIDA! Digite novamente: ");
			scanf("%d", &posicao);
		} else {
			posicao--;
			break;
		}
	}

	return posicao;
}

int verificaPosicaoParaInserir(estrutura vetorPrincipal[], int posicao) {

	while(1) {
		if(posicao < 1 || posicao > 10 || vetorPrincipal[posicao-1].tamEstruturaAux == 0) {
			printf("\nPOSICAO INVALIDA! Digite novamente: ");
			scanf("%d", &posicao);
		} else {
			posicao--;
			break;
		}
	}

	return posicao;
}

int verificaPosicaoEstruturaAux(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux) {

	while(1) {
		if(posicaoEstruturaAux < 1 || posicaoEstruturaAux > vetorPrincipal[posicao].qtdElementos) {
			printf("\nPOSICAO DA ESTRUTURA AUX INVALIDA! Tente novamente: ");
			scanf("%d", &posicaoEstruturaAux);
		} else {
			posicaoEstruturaAux--;
			break;
		}
	}
				
	return posicaoEstruturaAux;
}

int verificaTamanho(int tamanho) {

	while(1) {
		if(tamanho < 1) {
			printf("\nTAMANHO INVALIDO! Digite novamente: ");
			scanf("%d", &tamanho);
		} else
			break;
	}

	return tamanho;
}

int verificaEspacoEstruturaAux(estrutura vetorPrincipal[], int posicao) {

	int retorno = 0;

	if(vetorPrincipal[posicao].qtdElementos == vetorPrincipal[posicao].tamEstruturaAux) {
		printf("\nESTRUTURA AUXILIAR CHEIA\n");
		retorno = 0;
	} else
		retorno = 1;

	return retorno;
}

int verificaEstruturaAuxVazia(estrutura vetorPrincipal[], int posicao) {

	int retorno = 0;

	if(vetorPrincipal[posicao].qtdElementos <= 0) {
		printf("\nESTRUTURA AUXILIAR VAZIA\n");
		retorno = 0;
	} else
		retorno = 1;

	return retorno;
}