#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
	int id;
	char nome[50];
	char sexo;
	int idade;
	float altura;
}dados;

int menuPrincipal();
void cadastrarPessoa(dados pessoa[], int *qtdPessoas);
void listarPessoas(dados pessoa[], int *qtdPessoas);
void removerPessoa(dados pessoa[], int *qtdPessoas);

int main() {

	dados pessoa[TAM];
	int quantidadePessoas = 0;
	int *qtdPessoas;
	qtdPessoas = &quantidadePessoas;

	int flag = 0;
	int opcao = 0;

	while(flag == 0) {

		opcao = menuPrincipal(opcao);

		switch(opcao) {

			case 1: {
				if(quantidadePessoas == TAM) {
					printf("\nLIMITE DE PESSOAS CADASTRADAS ATINGIDO!\n");
				} else {
					cadastrarPessoa(pessoa, qtdPessoas);
					printf("\nPESSOA CADASTRADA COM SUCESSO!\n");
				}
				
				break;
			}

			case 2: {
				if(quantidadePessoas <= 0) {
					printf("\nNENHUMA PESSOA CADASTRADA!\n");
				} else {
					listarPessoas(pessoa, qtdPessoas);
				}
				break;
			}

			case 3: {
				printf("\nAINDA SENDO IMPLEMENTADO!\n");
				break;
			}

			case 4: {
				if(quantidadePessoas <= 0) {
					printf("\nNENHUMA PESSOA CADASTRADA!\n");
				} else {
					removerPessoa(pessoa, qtdPessoas);
					printf("\nPESSOA REMOVIDA COM SUCESSO!\n");
				}
				break;
			}

			case 5: {
				printf("\nO PROGRAMA FOI ENCERRADO!\n");
				flag = 1;
				break;
			}

			default: {
				printf("\nOPCAO INVALIDA!\n");
				break;
			}


		}
	}

	return 0;
}

int menuPrincipal() {

	int opcao = 0;

	printf("\n------ MENU PRINCIAL ------\n");
	printf("1) CADASTRAR PESSOA\n");
	printf("2) LISTAR PESSOAS\n");
	printf("3) ALTERAR CADASTRO PESSOA\n");
	printf("4) REMOVER CADASTRO PESSOA\n");
	printf("5) SAIR");
	printf("\n---------------------------\n");
	printf("> ");
	scanf("%d", &opcao);

	return opcao;
}

void cadastrarPessoa(dados pessoa[], int *qtdPessoas) {

	pessoa[*qtdPessoas].id = *qtdPessoas + 1;

	setbuf(stdin, NULL);
	printf("\nDigite o nome da pessoa: ");
	fgets(pessoa[*qtdPessoas].nome, 50, stdin);

	setbuf(stdin, NULL);
	printf("\nDigite o sexo da pessoa: ");
	scanf("%c", &pessoa[*qtdPessoas].sexo);

	setbuf(stdin, NULL);
	printf("\nDigite a idade da pessoa: ");
	scanf("%d", &pessoa[*qtdPessoas].idade);

	setbuf(stdin, NULL);
	printf("\nDigite a altura da pessoa: ");
	scanf("%f", &pessoa[*qtdPessoas].altura);

	*qtdPessoas+=1;
}

void listarPessoas(dados pessoa[], int *qtdPessoas) {

	int i;

	for(i = 0; i < *qtdPessoas; i++) {
		printf("\n---------------------------\n");
		printf("ID: %d", pessoa[i].id);
		printf("\nNOME: %s", pessoa[i].nome);
		printf("SEXO: %c", pessoa[i].sexo);
		printf("\nIDADE: %d", pessoa[i].idade);
		printf("\nALTURA: %.2f", pessoa[i].altura);
		printf("\n---------------------------\n");
	}
}

void removerPessoa(dados pessoa[], int *qtdPessoas) {

	int idExclusao;
	int i;

	printf("\nDigite o id da pessoa que deseja remover: ");
	scanf("%d", &idExclusao);
	idExclusao--;

	for(i = idExclusao; i < *qtdPessoas; i++) {
		pessoa[i].id = pessoa[i+1].id;
		strcpy(pessoa[i].nome, pessoa[i+1].nome);
		pessoa[i].sexo = pessoa[i+1].sexo;
		pessoa[i].idade = pessoa[i+1].idade;
		pessoa[i].altura = pessoa[i+1].altura;
	}

	*qtdPessoas-=1;
}