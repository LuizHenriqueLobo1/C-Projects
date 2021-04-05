#include <stdio.h>
#include <string.h>

#define TAM 3

typedef struct {
	char nome[20];
}nome;

void ordena(nome pessoa[]) {

	int i, y;
	int comparacao;
	char vetorAux[20];

	for(i = 0; i < TAM; i++) {
		for(y = i + 1; y < TAM; y++) {
			comparacao = strcmp(pessoa[i].nome, pessoa[y].nome);
			if(comparacao > 0) {
				strcpy(vetorAux, pessoa[i].nome);
				strcpy(pessoa[i].nome, pessoa[y].nome);
				strcpy(pessoa[y].nome, vetorAux);
			}
		}
	}
}

int main() {

	nome pessoa[TAM];
	int i;

	printf("\nDigite os nomes:\n");
	for(i = 0; i < TAM; i++) {
		fgets(pessoa[i].nome, 20, stdin);
	}

	ordena(pessoa);

	printf("\nNomes em ordem alfabetica:\n");
	for(i = 0; i < TAM; i++) {
		printf("%s", pessoa[i].nome);
	}

	return 0;
}