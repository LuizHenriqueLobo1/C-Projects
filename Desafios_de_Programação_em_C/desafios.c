#include <stdio.h>

#include "desafios_funcoes.h"

int main() {

	transforma_velocidade_ms_km(); // Questão Atual

	return 0;
}

// Questão 1 - Dado base e altura
void calculo_base_e_perimetro_retangulo() {

	float base = 5;
	float altu = 2;
	float area = 0;
	float peri = 0;

	area = base * altu;
	peri = (base * 2) + (altu * 2);

	printf("Area: %.2f", area);
	printf("\nPerimetro: %.2f", peri);
}

// Questão 2 - Dado um lado do quadrado
void calculo_area_e_perimetro_quadrado() {

	float lado = 5;
	float area = 0;
	float peri = 0;

	area = lado * lado;
	peri = lado * 4;

	printf("Area: %.2f", area);
	printf("\nPerimetro: %.2f", peri);
}

// Questão 3 - Dado o raio de um círculo
void calculo_area_e_perimetro_circulo() {

	float raio = 5;
	float area = 0;
	float peri = 0;

	area = 3.14 * (raio * raio);
	peri = (2 * 3.14 * raio);

	printf("Area: %.2f", area);
	printf("\nPerimetro: %.2f", peri);
}

// Questão 4 - Dado os 3 lados de um triângulo
void perimetro_triangulo() {

	float lado1 = 2;
	float lado2 = 5;
	float lado3 = 7;
	float peri = 0;

	peri = lado1 + lado2 + lado3;

	printf("Perimetro: %.2f", peri);
}

// Questão 5 - Dado um número, mostre o seu sucessor
void numero_sucessor() {

	int num = 0;
	int sucessor = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	sucessor = num += 1;

	printf("Numero sucessor: %d", sucessor);
}

// Questão 6 - Ler 2 números, mostrar quociente e resto da divisão
void quociente_resto_da_divisao() {

	int num1 = 10;
	int num2 = 2;
	int quociente = 0;
	int resto = 0;

	quociente = num1 / num2;
	resto = num1 % num2;

	printf("Quociente: %d", quociente);
	printf("\nResto: %d", resto);
}

// Questão 7 - Ler idade, mostrar em anos, meses e dias
void idade_anos_meses_dias() {

	int idade = 0;
	int idadeAnos = 0;
	int idadeMeses = 0;
	int idadeDias = 0;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	idadeAnos = idade;
	idadeMeses = idade * 12;
	idadeDias = idade * 365;

	printf("Idade em anos: %d", idadeAnos);
	printf("\nIdade em meses: %d", idadeMeses);
	printf("\nIdade em dias: %d", idadeDias);
}

// Questão 8 - Ler valor em Fahrenheit e transforma-lo para celsius
void converter_fahr_para_celsius() {

	float valorFahr = 44;
	float valorCelsius = 0;

	valorCelsius = (valorFahr - 32) * 5 / 9;

	printf("Valor em celsius: %.2f", valorCelsius);
}

// Questão 9 - Dado raio e altura, calcular volume do cilindro
void volume_cilindro() {

	float raio = 2;
	float altura = 5;
	float areaBase = 0;
	float volume = 0;

	areaBase = 3.14 * (raio * raio);
	volume = areaBase * altura;

	printf("Volume do cilindro: %.2f", volume);
}

// Questão 10 - Dado um numero menor que 32, mostrar seu valor em binario
void conversao_para_binario() {

	int num = 0;
	int bin1 = 0;
	int bin2 = 0;
	int bin3 = 0;
	int bin4 = 0;
	int bin5 = 0;
	int fbin = 0;

	printf("Digite o valor do numero: ");
	scanf("%d", &num);

	if(num < 32) {
		bin1 = num % 2;
		num = num / 2;
		bin2 = num % 2;
		num = num / 2;
		bin3 = num % 2;
		num = num / 2;
		bin4 = num % 2;
		bin5 = num / 2;
		fbin = (bin3 * 100) + (bin2 * 10) + bin1;
		printf("Valor em binario: %d", fbin);
	} else {
		printf("Numero invalido!");
	}
}

/* 11.Faça um algoritmo para calcular a nota semestral de um aluno. 
A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. 
Cada nota de bimestre é composta por 2 notas de provas. */

// Questão 11
void calcula_media_semestral_do_aluno() {

	float notaPrimeiroBimestre = 0;
	float notaSegundoBimestre = 0;
	float mediaSemestral = 0;
	float primeiroBimestreProva1 = 2;
	float primeiroBimestreProva2 = 1;
	float segundoBimestreProva1 = 3;
	float segundoBimestreProva2 = 5;

	notaPrimeiroBimestre = (primeiroBimestreProva1 + primeiroBimestreProva2);
	notaSegundoBimestre = (segundoBimestreProva1 + segundoBimestreProva2);
	mediaSemestral = (notaPrimeiroBimestre + notaSegundoBimestre) / 2;

	printf("Nota semestral: %.1f", mediaSemestral);
}

/* 12.Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. 
Para tal, multiplique o valor em m/s por 3,6. */

// Questão 12
void transforma_velocidade_ms_km() {

	float velMs = 15;
	float velKm = 0;

	velKm = velMs * 3.6;

	printf("Velocidade em %.2f km/h", velKm);
}

/* 13.Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo,
e ambas em sequência de uma resistência R3. 
Faça um algoritmo para calcular a resistência equivalente desse circuito. */

// Questão 13
