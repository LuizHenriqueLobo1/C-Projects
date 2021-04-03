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
int alterarPessoa(dados pessoa[], int *qtdPessoas);
void removerPessoa(dados pessoa[], int *qtdPessoas);
int menuAlterarPessoa();

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
				if(quantidadePessoas <= 0) {
					printf("\nNENHUMA PESSOA CADASTRADA!\n");
				} else {
					if(alterarPessoa(pessoa, qtdPessoas) == 1) {
						printf("\nO CADASTRO DA PESSOA FOI ALTERADO COM SUCESSO!\n");
					} else {
						break;
					}
				}
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
	printf("\nDIGITE O NOME DA PESSOA: ");
	fgets(pessoa[*qtdPessoas].nome, 50, stdin);

	setbuf(stdin, NULL);
	printf("\nDIGITE O SEXO DA PESSOA: ");
	scanf("%c", &pessoa[*qtdPessoas].sexo);

	setbuf(stdin, NULL);
	printf("\nDIGITE A IDADE DA PESSOA: ");
	scanf("%d", &pessoa[*qtdPessoas].idade);

	setbuf(stdin, NULL);
	printf("\nDIGITE A ALTURA DA PESSOA: ");
	scanf("%f", &pessoa[*qtdPessoas].altura);

	*qtdPessoas+=1;
}

void listarPessoas(dados pessoa[], int *qtdPessoas) {

	int i;

	for(i = 0; i < *qtdPessoas; i++) {
		printf("\n---------------------------\n");
		printf("ID:     %d\n", pessoa[i].id);
		printf("NOME:   %s", pessoa[i].nome);
		printf("SEXO:   %c\n", pessoa[i].sexo);
		printf("IDADE:  %d\n", pessoa[i].idade);
		printf("ALTURA: %.2f", pessoa[i].altura);
		printf("\n---------------------------\n");
	}
}

int alterarPessoa(dados pessoa[], int *qtdPessoas) {

	int idAlteracao;
	int flag = 0;
	int opcao;
	int retorno = 0;
	char novoNome[50];
	char novoSexo;
	int novaIdade;
	float novaAltura;

	setbuf(stdin, NULL);
	printf("\nDIGITE O ID DA PESSOA QUE DESEJA ALTERAR: ");
	scanf("%d", &idAlteracao);
	idAlteracao--;

	while(flag == 0) {

		opcao = menuAlterarPessoa(opcao);

		switch(opcao) {

			case 1: {
				setbuf(stdin, NULL);
				printf("\nDIGITE O NOVO NOME: ");
				fgets(novoNome, 50, stdin);
				strcpy(pessoa[idAlteracao].nome, novoNome);
				retorno = 1;
				flag = 1;
				break;
			}

			case 2: {
				setbuf(stdin, NULL);
				printf("\nDIGITE O NOVO SEXO: ");
				scanf("%c", &novoSexo);
				pessoa[idAlteracao].sexo = novoSexo;
				retorno = 1;
				flag = 1;
				break;
			}

			case 3: {
				setbuf(stdin, NULL);
				printf("\nDIGITE A NOVA IDADE: ");
				scanf("%d", &novaIdade);
				pessoa[idAlteracao].idade = novaIdade;
				retorno = 1;
				flag = 1;
				break;
			}

			case 4: {
				setbuf(stdin, NULL);
				printf("\nDIGITE A NOVA ALTURA: ");
				scanf("%f", &novaAltura);
				pessoa[idAlteracao].altura = novaAltura;
				retorno = 1;
				flag = 1;
				break;
			}

			case 5: {
				printf("\nVOLTANDO AO MENU PRINCIAL!\n");
				retorno = 0;
				flag = 1;
				break;
			}

			default: {
				retorno = 0;
				flag = 1;
				break;
			}
		}
	}

	return retorno;
}

void removerPessoa(dados pessoa[], int *qtdPessoas) {

	int idExclusao;
	int i;

	printf("\nDIGITE O ID DA PESSOA QUE DESEJA REMOVER: ");
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

int menuAlterarPessoa() {

	int opcao;

	printf("\n----- ALTERAR CADASTRO -----\n");
	printf("1) ALTERAR NOME\n");
	printf("2) ALTERAR SEXO\n");
	printf("3) ALTERAR IDADE\n");
	printf("4) ALTERAR ALTURA\n");
	printf("5) SAIR");
	printf("\n----------------------------\n");
	printf("> ");
	scanf("%d", &opcao);

	return opcao;
}