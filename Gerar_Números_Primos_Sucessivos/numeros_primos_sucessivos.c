#include <stdio.h>

int ehPrimo(int num);

int main() {

	int num;
	int count = 0;

	printf("\nDIGITE UM NUMERO: ");
	scanf("%d", &num);

	for(int i = 0; i < 99; i++) {
		num++;
		if(ehPrimo(num) == 1) {
			if(count < 3) {
				printf("\n%d\n", num);
				count++;
			}
		}
	}

	return 0;
}

int ehPrimo(int num) {
	int retorno = 1;

	for(int i = 2; i < num; i++) {
		if(num % i == 0) {
			retorno = 0;
		}
	}

	return retorno;
}