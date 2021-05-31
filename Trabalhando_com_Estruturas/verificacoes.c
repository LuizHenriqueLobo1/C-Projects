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
	else
		retorno = 1;

	return retorno;
}

int verificaExistenciaEstruturaAux(estrutura vetorPrincipal[], int posicao) {

	int retorno = 0;

	if(vetorPrincipal[posicao-1].tamEstruturaAux > 0)
		retorno = 0;
	else
		retorno = 1;

	return retorno;
}

int verificaPosicao(estrutura vetorPrincipal[], int posicao) {

	while(1) {
		if(posicao < 1 || posicao > 10 || verificaExistenciaEstruturaAux(vetorPrincipal, posicao) != 1) {
			printf("\nPOSICAO INVALIDA! Digite novamente: ");
			scanf("%d", &posicao);
		} else {
			posicao--;
			break;
		}
	}

	return posicao;
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