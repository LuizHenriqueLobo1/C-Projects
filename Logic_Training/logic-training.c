#include <stdio.h>

void q1();
void q2();
void q2_upgrade();
void q3();
void q3_upgrade();

int main() {
	q2_upgrade();
}

// 1. Escreva um programa que leia um número 
// e exiba se ele é positivo ou negativo.
void q1() {
	
	int num = 0;

	printf("Digite um número: ");
	scanf("%d", &num);

	if(num < 0) {
		printf("O número é negativo.\n");
	} else if(num > 0) {
		printf("O número é positivo.\n");
	} else {
		printf("O número é 0.\n");
	}
	
}

// 2. Escreva um programa que leia 3 valores
// e escreva a soma dos 2 maiores.
void q2() {

	int primeiroValor = 0;
	int segundoValor = 0;
	int terceiroValor = 0;

	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiroValor);

	printf("Digite o segundo valor: ");
	scanf("%d", &segundoValor);

	printf("Digite o terceiro valor: ");
	scanf("%d", &terceiroValor);

	if((primeiroValor > segundoValor || segundoValor > primeiroValor) && (primeiroValor > terceiroValor && segundoValor > terceiroValor)) {
		printf("Soma: %d\n", primeiroValor + segundoValor);
	} else if((primeiroValor > terceiroValor || terceiroValor > primeiroValor) && (primeiroValor > segundoValor && terceiroValor > segundoValor)) {
		printf("Soma: %d\n", primeiroValor + terceiroValor);
	} else if((segundoValor > terceiroValor || terceiroValor > segundoValor) && (segundoValor > primeiroValor && terceiroValor > primeiroValor)) {
		printf("Soma: %d\n", segundoValor + terceiroValor);
	} else if((primeiroValor == segundoValor) && primeiroValor > terceiroValor) {
		printf("Soma: %d\n", primeiroValor + segundoValor);
	} else if((primeiroValor == terceiroValor) && primeiroValor > segundoValor) {
		printf("Soma: %d\n", primeiroValor + terceiroValor);
	} else {
		printf("Soma: %d\n", segundoValor + terceiroValor);
	}
	
}

void q2_upgrade() {

	int array[3];
	int aux;

	for(int i = 0; i < 3; i++) {
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &array[i]);
	}


	for(int i = 1; i < 3; i++) {
		for(int j = 0; j < 2; j++) {
			if(array[j] > array[j + 1]) {
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
	}

	printf("Soma: %d\n", array[1] + array[2]);

}


// 3. Escreva um programa que leia um caractere e diga se ele é uma vogal, consoante, número 
// ou um símbolo (qualquer outro caractere, que não uma letra ou número).
void q3() {

	char caractere;

	printf("Digite um caractere: ");
	scanf("%c", &caractere);

	if(caractere == 'a' || caractere  == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
		printf("O caractere é uma vogal.\n");
	} else if(caractere == 'b' || caractere  == 'c' || caractere == 'd' || caractere == 'f' || caractere == 'g' ||
				caractere == 'h' || caractere  == 'j' || caractere == 'k' || caractere == 'l' || caractere == 'm' ||
				caractere == 'n' || caractere  == 'p' || caractere == 'q' || caractere == 'r' || caractere == 's' ||
				caractere == 't' || caractere  == 'v' || caractere == 'x' || caractere == 'w' || caractere == 'y' ||
				caractere == 'z') {
		printf("O caractere é uma consoante.\n");
	} else if(caractere == '0' || caractere  == '1' || caractere == '2' || caractere == '3' || caractere == '4' ||
				caractere == '5' || caractere  == '6' || caractere == '7' || caractere == '8' || caractere == '9') {
		printf("O caractere é um número.\n");
	} else {
		printf("O caractere é um símbolo.\n");
	}

}

void q3_upgrade() {

	char caractere;
	char caracteres[37] = "aeioubcdfghjklmnpqrstvwxyz0987654321";
	int ehSimbolo = 1;

	printf("Digite um caractere: ");
	scanf("%c", &caractere);

	for(int i = 0; caracteres[i] != '\0'; i++) {
		if(caractere == caracteres[i]) {
			ehSimbolo = 0;
			if(i >= 0 && i <= 4) {
				printf("O caractere é uma vogal.\n");
			} else if(i >= 5 && i <= 25) {
				printf("O caractere é uma consoante.\n");
			} else if(i >= 26 && i <= 36) {
				printf("O caractere é um número.\n");
			}
		}
	}

	if(ehSimbolo)
		printf("O caractere é um símbolo.\n");

}
