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

int getMaiorValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao) {

	int maiorValor = 0;
	int i, y;

	for(i = 0; i < vetorPrincipal[posicao].qtdElementos; i++)
		if(vetorPrincipal[posicao].pEstruturaAuxiliar[i] > maiorValor)
			maiorValor = vetorPrincipal[posicao].pEstruturaAuxiliar[i];

	return maiorValor;
}

int getMenorValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao) {

	int menorValor = vetorPrincipal[posicao].pEstruturaAuxiliar[0];
	int i, y;

	for(i = 0; i < vetorPrincipal[posicao].qtdElementos; i++)
		if(vetorPrincipal[posicao].pEstruturaAuxiliar[i] < menorValor)
			menorValor = vetorPrincipal[posicao].pEstruturaAuxiliar[i];

	return menorValor;
}

int salvarElementosEmArquivo(estrutura vetorPrincipal[]) {

	int retorno = 0;
	FILE *file;
	int i, y;

	file = fopen("dados.txt", "w");
	
	fprintf(file, "VALORES DAS ESTRUTURAS AUXILIARES\n");

	for(i = 0; i < TAM; i++) {
		if(vetorPrincipal[i].qtdElementos > 0) {
			fprintf(file, "%d ->", i+1);
			for(y = 0; y < vetorPrincipal[i].qtdElementos; y++)
					fprintf(file, " %d", vetorPrincipal[i].pEstruturaAuxiliar[y]);
				y = 0;
			fprintf(file, "\n");
		}
	}
	
	retorno = fclose(file);

	return retorno;
}

void alterarTamanhoEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int novoTamanho) {

	int tamanhoAtual = vetorPrincipal[posicao].tamEstruturaAux;
	novoTamanho -= tamanhoAtual;

	vetorPrincipal[posicao].pEstruturaAuxiliar = realloc(vetorPrincipal[posicao].pEstruturaAuxiliar, (tamanhoAtual + novoTamanho));
	vetorPrincipal[posicao].tamEstruturaAux += novoTamanho;
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