#include <stdio.h>
#include <stdlib.h>

#include "estruturas.h"

void inicializar(estrutura vetorPrincipal[]) {

	int i;

	for(i = 0; i < TAM; i++) {
		vetorPrincipal[i].pEstruturaAuxiliar = NULL;
		vetorPrincipal[i].qtdElementos = 0;
		vetorPrincipal[i].tamEstruturaAux = 0;
	}
}

void criarEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int tamanho) {

	int i;

	vetorPrincipal[posicao].pEstruturaAuxiliar = malloc(tamanho * sizeof(int));
	vetorPrincipal[posicao].tamEstruturaAux = tamanho;

	for(i = 0; i < tamanho; i++) 
		vetorPrincipal[posicao].pEstruturaAuxiliar[i] = 0;
}

void inserirValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int valor) {

	vetorPrincipal[posicao].pEstruturaAuxiliar[vetorPrincipal[posicao].qtdElementos] = valor;
	vetorPrincipal[posicao].qtdElementos++;
}

void alterarValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux, int valor) {

	vetorPrincipal[posicao].pEstruturaAuxiliar[posicaoEstruturaAux] = valor;
}

void removerValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux) {

	int i = 0;

	vetorPrincipal[posicao].pEstruturaAuxiliar[posicaoEstruturaAux] = 0;

	for(i = posicaoEstruturaAux; i < vetorPrincipal[posicao].qtdElementos; i++) {
		vetorPrincipal[posicao].pEstruturaAuxiliar[i] = vetorPrincipal[posicao].pEstruturaAuxiliar[i+1];
	}

	vetorPrincipal[posicao].qtdElementos--;
}

void printarEstrutura(estrutura vetorPrincipal[]) {

	int i, y;

	for(i = 0; i < TAM; i++) {
		if(i + 1 < 10)
			printf("\n%d.  ", i+1);
		else
			printf("\n%d. ", i+1);
		if(vetorPrincipal[i].tamEstruturaAux <= 0)
			printf("%d", vetorPrincipal[i]);
		else
			printf("-> ", vetorPrincipal[i]);
			for(y = 0; y < vetorPrincipal[i].qtdElementos; y++) {
				printf("%d ", vetorPrincipal[i].pEstruturaAuxiliar[y]);
			}
	}
}

void getDadosTodasEstruturas(estrutura vetorPrincipal[]) {

	int i, y;
	int vetorAux[15];
	int contador = 0;
	
	for(i = 0; i < 15; i++)
		vetorAux[i] = -999;

	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].qtdElementos > 0) {
			for(y = 0; y < vetorPrincipal[i].qtdElementos; y++) {
				vetorAux[contador] = vetorPrincipal[i].pEstruturaAuxiliar[y];
				contador++;
			}
		}
	}

	for(i = 0; i < 15; i++) {
		if(vetorAux[i] != -999)
			printf("%d\n", vetorAux[i]);
	}
}

void removerTodosValoresEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao) {
	
	int i;

	for(i = 0; i < vetorPrincipal[posicao].qtdElementos; i++) {
		vetorPrincipal[posicao].pEstruturaAuxiliar[i] = 0;
	}

	vetorPrincipal[posicao].qtdElementos = 0;
}

int getQuantidadeDadosTodasEstruturasAuxiliares(estrutura vetorPrincipal[]) {

	int i;
	int contador = 0;

	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].qtdElementos > 0)
			contador += vetorPrincipal[i].qtdElementos;
	}

	return contador;
}

int salvarElementosEmArquivo(estrutura vetorPrincipal[]) {

	int retorno = 1;
	FILE *file;
	int i, y;

	file = fopen("dados.txt", "w");
	
	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].qtdElementos > 0)
			for(y = 0; y < vetorPrincipal[i].qtdElementos; y++)
					fprintf(file, "%d\n", vetorPrincipal[i].pEstruturaAuxiliar[y]);
				y = 0;
	}
	
	retorno = fclose(file);

	return retorno;
}

void finalizarUmaEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao) {

	vetorPrincipal[posicao].pEstruturaAuxiliar = NULL;
	free(vetorPrincipal[posicao].pEstruturaAuxiliar);
	vetorPrincipal[posicao].qtdElementos = 0;
	vetorPrincipal[posicao].tamEstruturaAux = 0;
}

void finalizar(estrutura vetorPrincipal[]) {

	int i;

	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].tamEstruturaAux > 0) {
			free(vetorPrincipal[i].pEstruturaAuxiliar);
			vetorPrincipal[i].qtdElementos = 0;
			vetorPrincipal[i].tamEstruturaAux = 0;
		}
	}
}