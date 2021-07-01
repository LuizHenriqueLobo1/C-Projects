#include <stdio.h>

void imprimeDecrescente(int n);
void imprimeCrescente(int n);

int main() {
	int n = 10;
	printf("\nCRESCENTE");
	imprimeCrescente(n);
	printf("\nDECRESCENTE");
	imprimeDecrescente(n);
	return 0;
}

void imprimeDecrescente(int n) {
	printf("\n%d", n);
	if(n != 0)
		imprimeDecrescente(n - 1);

}

void imprimeCrescente(int n) {
	if(n != 0)
		imprimeCrescente(n - 1);
	printf("\n%d", n);
}