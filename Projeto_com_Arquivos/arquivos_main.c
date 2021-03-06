#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
	float nota1;
	float nota2;
	float nota3;
}notas;

typedef struct {
	int id;
	char nome[50];
	char sexo;
	int idade;
	notas provas;
}dados;

int menu();
int cadastrarAlunosAutomaticamente(dados pessoa[]);
void imprimirAlunosCadastrados(dados pessoa[]);
void mediaAlunos(dados pessoa[]);

int main() {

	dados pessoa[TAM];
	int loop = 1;
	int opcao = 0;
	int alunosCadastrados = 0;

	while(loop == 1) {

		opcao = menu();

		switch(opcao) {

			case 0: {
				printf("\nPROGRAMA ENCERRADO\n");
				loop = 0;
				break;
			}

			case 1: {
				alunosCadastrados = cadastrarAlunosAutomaticamente(pessoa);
				printf("\nALUNOS CADASTRADOS COM SUCESSO\n");
				break;
			}

			case 2: {
				printf("\n<LISTA DE ALUNOS>\n");
				if(alunosCadastrados == 1) 
					imprimirAlunosCadastrados(pessoa);
				else
					printf("\nNAO EXISTE ALUNO CADASTRADO\n");
				break;
			}

			case 3: {
				printf("\n<LISTA DE MEDIAS DOS ALUNOS>\n");
				if(alunosCadastrados == 1)
					mediaAlunos(pessoa);
				else
					printf("\nNAO EXISTE ALUNO CADASTRADO\n");
				break;
			}

			default: {
				break;
			}

		}

	}

	return 0;
}

int menu() {

	int opcao = 0;

	printf("\n----------------- MENU -----------------\n");
	printf("0. SAIR\n");
	printf("1. CADASTRAR ALUNOS AUTOMATICAMENTE\n");
	printf("2. IMPRIMIR ALUNOS CADASTRADOS\n");
	printf("3. IMPRIMIR MEDIA DOS ALUNOS CADASTRADOS\n");
	printf("----------------------------------------\n");
	printf("> ");
	scanf("%d", &opcao);

	return opcao;
}

int cadastrarAlunosAutomaticamente(dados pessoa[]) {

	FILE *file;
	char getbr;
	int i;

	file = fopen("dados.txt", "r");

	for(i = 0; i < TAM; i++) {
		fscanf(file, "%d\n", &pessoa[i].id);
		fgets(pessoa[i].nome, 50, file);
		fscanf(file, "%c", &pessoa[i].sexo);
		fscanf(file, "%d", &pessoa[i].idade);
		fscanf(file, "%f", &pessoa[i].provas.nota1);
		fscanf(file, "%f", &pessoa[i].provas.nota2);
		fscanf(file, "%f", &pessoa[i].provas.nota3);
		fscanf(file, "%c", &getbr);
	}

	fclose(file);

	return 1;
}

void imprimirAlunosCadastrados(dados pessoa[]) {

	int i;

	for(i = 0; i < TAM; i++) {
		printf("\nID: %d", pessoa[i].id);
		printf("\nNOME: %s", pessoa[i].nome);
		printf("SEXO: %c", pessoa[i].sexo);
		printf("\nIDADE: %d", pessoa[i].idade);
		printf("\nNOTA 1: %.2f", pessoa[i].provas.nota1);
		printf("\nNOTA 2: %.2f", pessoa[i].provas.nota2);
		printf("\nNOTA 3: %.2f\n", pessoa[i].provas.nota3);
	}
}

void mediaAlunos(dados pessoa[]) {

	float media;
	int i;

	for(i = 0; i < TAM; i++) {
		media = (pessoa[i].provas.nota1 + pessoa[i].provas.nota2 + pessoa[i].provas.nota3) / 3;
		printf("\nID ALUNO: %d", pessoa[i].id);
		printf("\nMEDIA: %.2f\n", media);
	}
}