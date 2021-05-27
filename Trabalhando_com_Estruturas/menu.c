#include <stdio.h>

#include "estruturas.h"

int main() {

	estrutura vetorPrincipal[TAM];
	int posicao;
	int posicaoEstruturaAux;
	int tamanho;
	int valor; 
	int loop = 1;
	int opcao;

	inicializar(vetorPrincipal);

	while(loop == 1) {

		opcao = menu();

		switch(opcao) {

			case 0: {
				finalizar(vetorPrincipal);
				printf("\nPROGRAMA ENCERRADO!\n");
				loop = 0;
				break;
			}

			case 1: {

				printf("\n<CRIANDO ESTRUTURA AUXILIAR>\n");

				int contador = 0;

				for(int i = 0; i < TAM; i++) {
					if(vetorPrincipal[i].tamEstruturaAux > 0)
						contador++;
				}

				if(contador == 10) {
					printf("\nLIMETE MAXIMO DE ESTRUTURAS AUXILIARES ATINGIDO\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				while(1) {
					if(posicao < 1 || posicao > 10 || vetorPrincipal[posicao-1].tamEstruturaAux > 0) {
						printf("\nPOSICAO INVALIDA! Tente novamente: ");
						scanf("%d", &posicao);
					} else
						break;
				}
				posicao--;

				printf("\nDigite o tamanho: ");
				scanf("%d", &tamanho);
				while(1) {
					if(tamanho < 1) {
						printf("\nTAMANHO INVALIDO! Tente novamente: ");
						scanf("%d", &tamanho);
					} else
						break;
				}

				criarEstruturaAuxiliar(vetorPrincipal, posicao, tamanho);
				printf("\nESTRUTURA AUXILIAR CRIADA COM SUCESSO\n");
				break;
			}

			case 2: {

				printf("\n<INSERINDO VALOR EM ESTRUTURA AUXILIAR>\n");

				int contador = 0;

				for(int i = 0; i < TAM; i++) {
					if(vetorPrincipal[i].tamEstruturaAux == 0)
						contador++;
				}

				if(contador == 10) {
					printf("\nNAO EXISTE ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				while(1) {
					if(posicao <= 0 || posicao > 10 || vetorPrincipal[posicao-1].tamEstruturaAux <= 0) {
						printf("\nPOSICAO INVALIDA! Tente novamente: ");
						scanf("%d", &posicao);
					} else
						break;
				}
				posicao--;

				printf("\nDigite o valor: ");
				scanf("%d", &valor);

				inserirValorEstruturaAuxiliar(vetorPrincipal, posicao, valor);
				printf("\nVALOR INSERIDO COM SUCESSO\n");
				break;
			}

			case 3: {

				printf("\n<REMOVENDO VALOR EM ESTRUTURA AUXILIAR>\n");

				int contador = 0;

				for(int i = 0; i < TAM; i++) {
					if(vetorPrincipal[i].tamEstruturaAux == 0)
						contador++;
				}

				if(contador == 10) {
					printf("\nNAO EXISTE ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				while(1) {
					if(posicao < 0 || posicao > 10 || vetorPrincipal[posicao-1].tamEstruturaAux <= 0) {
						printf("\nPOSICAO INVALIDA! Tente novamente: ");
						scanf("%d", &posicao);
					} else
						break;
				}
				posicao--;

				printf("\nDigite a posicao do valor na estrutura auxiliar: ");
				scanf("%d", &posicaoEstruturaAux);
				while(1) {
					if(posicaoEstruturaAux < 0 || posicaoEstruturaAux > vetorPrincipal[posicao].qtdElementos) {
						printf("\nPOSICAO DO VALOR INVALIDA! Tente novamente: ");
						scanf("%d", &posicaoEstruturaAux);
					} else
						break;
				}
				posicaoEstruturaAux--;

				removerValorEstruturaAuxiliar(vetorPrincipal, posicao, posicaoEstruturaAux);
				printf("\n<VALOR REMOVIDO COM SUCESSO>\n");
				break;
			}

			case 4: {
				printf("\n<PRINTANDO ESTRUTURAS>\n");
				printarEstrutura(vetorPrincipal);
				printf("\n");
				break;
			}

			case 5: {
				printf("\n<LISTANDO DADOS DAS ESTRUTUAS>\n");
				getDadosTodasEstruturas(vetorPrincipal);
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

int menu() {

	int opcao;

	printf("\n-------------MENU-------------");
	printf("\n0. SAIR");
	printf("\n1. CRIAR ESTRUTURA AUX");
	printf("\n2. INSERIR VALOR NA ESTRUT AUX");
	printf("\n3. REMOVER VALOR DA ESTRUT AUX");
	printf("\n4. PRINTAR ESTRUTURAS");
	printf("\n5. PEGAR TODOS OS DADOS");
	printf("\n------------------------------");
	printf("\n> ");
	scanf("%d", &opcao);

	return opcao;
}