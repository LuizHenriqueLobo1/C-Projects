#include <stdio.h>

void novoValor(int *p);

int main() {

	int x;
	int *p;

	printf("\nDigite o valor de x: ");
	scanf("%d", &x);
	p = &x;

	printf("\nO atual valor de x eh: %d\n", x);

	trocaNumero(p);

	printf("\nO novo valor de x eh: %d\n", x);

	return 0;
}

void novoValor(int *p) {

	int novoX;

	printf("\nDigite o novo valor de x: ");
	scanf("%d", &novoX);

	*p = novoX;
}