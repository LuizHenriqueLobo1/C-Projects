#include <stdio.h>

#include "estruturas.h"

int main() {

	estrutura vetorPrincipal[TAM];
	int posicao;
	int posicaoEstruturaAux;
	int tamanho;
	int valor; 
	int qtdDadosTotal = 0;
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

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 0) {
					printf("\nLIMETE MAXIMO DE ESTRUTURAS AUXILIARES ATINGIDO\n");
					break;
				}
				
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaCriar(vetorPrincipal, posicao);

				printf("\nDigite o tamanho: ");
				scanf("%d", &tamanho);
				tamanho = verificaTamanho(tamanho);

				criarEstruturaAuxiliar(vetorPrincipal, posicao, tamanho);
				printf("\nESTRUTURA AUXILIAR CRIADA COM SUCESSO\n");
				
				break;
			}

			case 2: {

				printf("\n<INSERINDO VALOR EM ESTRUTURA AUXILIAR>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaInserir(vetorPrincipal, posicao);

				printf("\nDigite o valor: ");
				scanf("%d", &valor);

				inserirValorEstruturaAuxiliar(vetorPrincipal, posicao, valor);
				printf("\nVALOR INSERIDO COM SUCESSO\n");
				break;
			}

			case 3: {

				printf("\n<ALTERANDO VALOR DA ESTRUTURA AUXILIAR>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaInserir(vetorPrincipal, posicao);

				printf("\nDigite a posicao do valor na estrutura auxiliar: ");
				scanf("%d", &posicaoEstruturaAux);
				posicaoEstruturaAux = verificaPosicaoEstruturaAux(vetorPrincipal, posicao, posicaoEstruturaAux);

				printf("\nDigite o novo valor: ");
				scanf("%d", &valor);

				alterarValorEstruturaAuxiliar(vetorPrincipal, posicao, posicaoEstruturaAux, valor);
				printf("\nVALOR ALTERADO COM SUCESSO\n");
				break;
			}

			case 4: {

				printf("\n<REMOVENDO VALOR EM ESTRUTURA AUXILIAR>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaInserir(vetorPrincipal, posicao);

				printf("\nDigite a posicao do valor na estrutura auxiliar: ");
				scanf("%d", &posicaoEstruturaAux);
				posicaoEstruturaAux = verificaPosicaoEstruturaAux(vetorPrincipal, posicao, posicaoEstruturaAux);

				removerValorEstruturaAuxiliar(vetorPrincipal, posicao, posicaoEstruturaAux);
				printf("\nVALOR REMOVIDO COM SUCESSO\n");
				break;
			}

			case 5: {
				printf("\n<PRINTANDO ESTRUTURAS>\n");
				printarEstrutura(vetorPrincipal);
				printf("\n");
				break;
			}

			case 6: {
				printf("\n<LISTANDO DADOS DAS ESTRUTURAS>\n");
				getDadosTodasEstruturas(vetorPrincipal);
				break;
			}

			case 7: {
				printf("\n<REMOVENDO TODOS OS VALORES DE UMA ESTRUTURA AUXILIAR>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaInserir(vetorPrincipal, posicao);

				removerTodosValoresEstruturaAuxiliar(vetorPrincipal, posicao);
				printf("\nTODOS OS VALORES REMOVIDOS COM SUCESSO\n");
				break;
			}

			case 8: {
				printf("\n<REMOVENDO ESTRUTURA AUXILIAR>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				posicao = verificaPosicaoParaInserir(vetorPrincipal, posicao);

				finalizarUmaEstruturaAuxiliar(vetorPrincipal, posicao);
				printf("\nESTRUTURA AUXILIAR REMOVIDA COM SUCESSO\n");
				break;
			}

			case 9: {
				printf("\n<PEGANDO QUANTIDADE TOTAL DE DADOS DE TODAS ESTRUTURAS>\n");

				if(verificaEspacoEstruturaPrincipal(vetorPrincipal) == 1) {
					printf("\nNAO EXISTE NENHUMA ESTRUTURA AUXILIAR\n");
					break;
				}

				qtdDadosTotal = getQuantidadeDadosTodasEstruturasAuxiliares(vetorPrincipal);
				printf("\nQUANTIDADE DE DADOS TOTAL -> %d\n", qtdDadosTotal);
				break;
			}

			default: {
				printf("\nOPCAO INVALIDA\n");
				break;
			}

		}

	}

	finalizar(vetorPrincipal);

	return 0;
}

int menu() {

	int opcao;

	printf("\n---------------MENU---------------");
	printf("\n0. SAIR");
	printf("\n1. CRIAR ESTRUTURA AUX");
	printf("\n2. INSERIR VALOR NA ESTRUT AUX");
	printf("\n3. ALTERAR VALOR DA ESTRUT AUX");
	printf("\n4. REMOVER VALOR DA ESTRUT AUX");
	printf("\n5. PRINTAR ESTRUTURAS");
	printf("\n6. PEGAR TODOS OS DADOS");
	printf("\n7. REMOVER TODOS VAL ESTRUT AUX");
	printf("\n8. REMOVER ESTRUTURA AUX");
	printf("\n9. QUANTIDADE DE DADOS TOTAL");
	printf("\n----------------------------------");
	printf("\n> ");
	scanf("%d", &opcao);

	return opcao;
}