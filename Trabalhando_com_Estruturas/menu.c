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
				printf("\nPROGRAMA ENCERRADO!\n");
				loop = 0;
				break;
			}

			case 1: {

				printf("\nDigite a posicao > ");
				scanf("%d", &posicao);
				posicao--;

				printf("\nDigite o tamanho > ");
				scanf("%d", &tamanho);

				criarEstruturaAuxiliar(vetorPrincipal, posicao, tamanho);
				printf("\nESTRUTURA AUXILIAR DE TAMANHO %d, CRIADA NA POSICAO %d\n", tamanho, posicao + 1);
				break;
			}

			case 2: {

				printf("\nDigite a posicao > ");
				scanf("%d", &posicao);
				posicao--;

				printf("\nDigite o valor > ");
				scanf("%d", &valor);

				inserirValorEstruturaAuxiliar(vetorPrincipal, posicao, valor);
				printf("\nVALOR %d INSERIDO NA ESTRUTURA DE POSICAO %d\n", valor, posicao + 1);
				break;
			}

			case 3: {
				printf("\nESTRUTURAS\n");
				printarEstrutura(vetorPrincipal);
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

	printf("\n\n-------------MENU-------------");
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