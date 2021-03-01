#include <stdio.h>

void calculo_base_e_perimetro_retangulo();
void calculo_area_e_perimetro_quadrado();
void calculo_area_e_perimetro_circulo();
void perimetro_triangulo();
void numero_sucessor();

int main() {

	numero_sucessor(); // Questão Atual

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