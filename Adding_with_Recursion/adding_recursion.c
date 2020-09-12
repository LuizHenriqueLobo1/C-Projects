#include <stdio.h>
#include <stdlib.h>

#define tam 3

int somaVet(int Vet[], int t);

int main() {
	
	int vetor[tam];
	int result;
    int i;
	
    printf("\nInforme os valores:\n");
	for(i = 0 ; i < tam ; i++) {
		scanf("%d", &vetor[i]);
	}
	
	result = somaVet(vetor, tam);
	
	printf("\nResultado da soma: %d\n\n", result);
	
	return 0;
}

int somaVet(int vet[], int t) {
	
	if(t == 1) {
		return vet[0];
	} else {
		return vet[t-1] + somaVet(vet, t-1);
	}
}