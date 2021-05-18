#include <stdio.h>

#include "estruturas.h"

int main() {

	estrutura vetorPrincipal[TAM];
	int posicao;
	int tamanho;
	int valor; 
	int loop = 1;
	int opcao;

	inicializar(vetorPrincipal);

	while(loop == 1) {

		opcao = menu();

		switch(opcao) {

			case 0: {
				printf("\nPROGRAMA ENCERRADO!\n\n");
				loop = 0;
				break;
			}

			case 1: {

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				while(1) {
					if(posicao < 1 || posicao > 10) {
						printf("\nPOSICAO INVALIDA\nTente novamente: ");
						scanf("%d", &posicao);
					} else
						break;
				}
				posicao--;

				printf("\nDigite o tamanho: ");
				scanf("%d", &tamanho);
				while(1) {
					if(tamanho < 1) {
						printf("\nTAMANHO INVALIDO\nTente novamente: ");
						scanf("%d", &tamanho);
					} else
						break;
				}

				criarEstruturaAuxiliar(vetorPrincipal, posicao, tamanho);
				printf("\nESTRUTURA AUXILIAR CRIADA COM SUCESSO\n");
				break;
			}

			case 2: {

				printf("\nDigite a posicao > ");
				scanf("%d", &posicao);
				posicao--;

				printf("\nDigite o valor > ");
				scanf("%d", &valor);

				inserirValorEstruturaAuxiliar(vetorPrincipal, posicao, valor);
				printf("\nVALOR INSERIDO COM SUCESSO\n");
				break;
			}

			case 3: {
				printf("\nESTRUTURAS\n");
				printarEstrutura(vetorPrincipal);
				printf("\n");
				break;
			}

			case 4: {
				printf("\nDADOS DAS ESTRUTUAS\n");
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
	printf("\n3. PRINTAR ESTRUTURAS");
	printf("\n4. PEGAR TODOS OS DADOS");
	printf("\n------------------------------");
	printf("\n> ");
	scanf("%d", &opcao);

	return opcao;
}