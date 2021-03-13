#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
	float nota1;
	float nota2;
	float nota3;
}notas;

typedef struct {
	char nome[50];
	char sexo;
	int idade;
	notas provas;
}dados;

void mediaAlunos(dados pes[]);

int main() {

	FILE *file;
	dados pessoa[TAM];
	int i;
	char getbr;
	int media[TAM];

	file = fopen("dados.txt", "r");

	for(i = 0; i < TAM; i++) {
		fgets(pessoa[i].nome, 50, file);
		fscanf(file, "%c", &pessoa[i].sexo);
		fscanf(file, "%d", &pessoa[i].idade);
		fscanf(file, "%f", &pessoa[i].provas.nota1);
		fscanf(file, "%f", &pessoa[i].provas.nota2);
		fscanf(file, "%f", &pessoa[i].provas.nota3);
		fscanf(file, "%c", &getbr);
	}

	for(i = 0; i < TAM; i++) {
		printf("\nNome: %s", pessoa[i].nome);
		printf("Sexo: %c", pessoa[i].sexo);
		printf("\nIdade: %d", pessoa[i].idade);
		printf("\nNota 1: %.2f", pessoa[i].provas.nota1);
		printf("\nNota 2: %.2f", pessoa[i].provas.nota2);
		printf("\nNota 3: %.2f\n", pessoa[i].provas.nota3);
	}

	mediaAlunos(pessoa);

	fclose(file);
	return 0;
}

void mediaAlunos(dados pes[]) {

	float media;
	int i;

	for(i = 0; i < TAM; i++) {
		media = (pes[i].provas.nota1 + pes[i].provas.nota2 + pes[i].provas.nota3) / 3;
		printf("\nMedia: %.2f", media);
	}
}