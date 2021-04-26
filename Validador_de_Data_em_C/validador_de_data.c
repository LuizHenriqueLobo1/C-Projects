#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 15

int validarTamanho(char data[]);
int validarDigitos(char data[]);
int validarData(char data[]);

int main() {

	char data[TAM];

	strcpy(data, "04/03/2001");
	printf("\nData: %s\n", data);

	if(validarTamanho(data) != 1) {
		printf("\nData invalidada pelo tamanho!\n");
	} else if(validarDigitos(data) != 1) {
		printf("\nData invalidada pela quantidade de barras (/)!\n");
	} else if(validarData(data) != 1) {
		printf("\nData invalidada!\n");
	} else {
		printf("\nData validada com sucesso!\n");
	}

	return 0;
}

int validarTamanho(char data[]) {

	int retorno;

	if(strlen(data) - 1 < 11 && strlen(data) - 1 > 5) {
		retorno = 1;
	} else {
		retorno = -1;
	}

	return retorno;
}

int validarDigitos(char data[]) {

	int retorno;
	int contador = 0;
	int i;

	for(i = 0; data[i] != '\0'; i++) {
		if(data[i] == '/') {
			contador++;
		}
	}

	if(contador == 2) {
		retorno = 1;
	} else {
		retorno = -1;
	}

	return retorno;
}

int validarData(char data[]) {

	int retorno;
	char *dia;
	char *mes;
	char *ano;
	int diaI;
	int mesI;
	int anoI;
	int contador = 0;

	dia = strtok(data, "/");
	mes = strtok(NULL, "/");
	ano = strtok(NULL, "/");

	diaI = atoi(dia);
	mesI = atoi(mes);
	anoI = atoi(ano);

	if(strlen(ano) == 4) {
		
		if(mesI == 1 || mesI == 3 || mesI == 5 || mesI == 7 || mesI == 8 || mesI == 10 || mesI == 12) {
			if(diaI <= 0 || diaI > 31) {
				printf("\nDia invalido!\n");
				retorno = 0;
			} else {
				retorno = 1;
			}
		} else if(mesI == 2) {
			// Descobre se o ano é bissexto
			if(anoI % 4 == 0)
				contador++;
			if(anoI % 100 == 0) 
				contador--;
			if(anoI % 400 == 0) 
				contador++;
			// Contador > 0 = Ano bissexto
			if(contador > 0) {
				if(mesI == 2) {
					if(diaI <= 0 || diaI > 29) {
						printf("\nDia invalido!\n");
						retorno = 0;
					} else {
						retorno = 1;
					}	
				}
			}
			// Contador <= 0 = Ano nao bissexto
			else {
				if(mesI == 2) {
					if(diaI <= 0 || diaI > 28) {
						printf("\nDia invalido!\n");
						retorno = 0;
					} else {
						retorno = 1;
					}
				}
			}
		}
		else if(mesI == 4 || mesI == 6 || mesI == 9 || mesI == 11) {
			if(diaI <= 0 || diaI > 30) {
				printf("\nDia invalido!\n");
				retorno = 0;
			} else {
				retorno = 1;
			}
		}
		else {
			printf("\nMes invalido!\n");
			retorno = 0;
		}
	} else {
		printf("\nAno invalido!\n");
		retorno = 0;
	}

	return retorno;
}