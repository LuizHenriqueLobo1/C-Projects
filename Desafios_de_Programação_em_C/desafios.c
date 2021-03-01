#include <stdio.h>

#include "desafios_funcoes.h"

int main() {

	transforma_velocidade_ms_km(); // Questão Atual

	return 0;
}

/* 1.Dado o tamanho da base e da altura de um retângulo, 
calcular a sua área e o seu perímetro. */
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

/* 2.Dado o tamanho do lado de um quadrado,
calcular a área e o perímetro do mesmo. */
void calculo_area_e_perimetro_quadrado() {

	float lado = 5;
	float area = 0;
	float peri = 0;

	area = lado * lado;
	peri = lado * 4;

	printf("Area: %.2f", area);
	printf("\nPerimetro: %.2f", peri);
}

/* 3.Dado o tamanho do raio de uma circunferência,
calcular a área e o perímetro da mesma. */
void calculo_area_e_perimetro_circulo() {

	float raio = 5;
	float area = 0;
	float peri = 0;

	area = 3.14 * (raio * raio);
	peri = (2 * 3.14 * raio);

	printf("Area: %.2f", area);
	printf("\nPerimetro: %.2f", peri);
}

/* 4.Dado os três lados de um triângulo, 
determinar o perímetro do mesmo. */
void perimetro_triangulo() {

	float lado1 = 2;
	float lado2 = 5;
	float lado3 = 7;
	float peri = 0;

	peri = lado1 + lado2 + lado3;

	printf("Perimetro: %.2f", peri);
}

/* 5.Ler um número inteiro e exibir o seu sucessor. */
void numero_sucessor() {

	int num = 0;
	int sucessor = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	sucessor = num += 1;

	printf("Numero sucessor: %d", sucessor);
}

/* 6.Ler dois números inteiros e exibir o quociente
e o resto da divisão inteira entre eles. */
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

/* 7.Solicitar a idade de uma pessoa em dias e informar
na tela a idade em anos, meses e dias. */
void idade_anos_meses_dias() {

	int idadeAnos = 0;
	int idadeMeses = 0;
	int idadeDias = 0;

	printf("Digite sua idade em dias: ");
	scanf("%d", &idadeDias);

	idadeAnos = idadeDias / 365;
	idadeMeses = idadeDias / 12;

	printf("Idade em anos: %d", idadeAnos);
	printf("\nIdade em meses: %d", idadeMeses);
	printf("\nIdade em dias: %d", idadeDias);
}

/* 8.Dado que a fórmula para conversão de Fahrenheit para Celsius é tal,
ler um valor de temperatura em Fahrenheit e exibi-lo em Celsius. */
void converter_fahr_para_celsius() {

	float valorFahr = 44;
	float valorCelsius = 0;

	valorCelsius = (valorFahr - 32) * 5 / 9;

	printf("Valor em celsius: %.2f", valorCelsius);
}

/* 9.Faça um algoritmo que calcule e apresente o valor do volume de 
uma lata de óleo, dado seu raio e sua altura. */
void volume_cilindro() {

	float raio = 2;
	float altura = 5;
	float areaBase = 0;
	float volume = 0;

	areaBase = 3.14 * (raio * raio);
	volume = areaBase * altura;

	printf("Volume do cilindro: %.2f", volume);
}

/* 10.Converter um inteiro informado menor que 32
para sua representação em binário */
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

/* 12.Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para km/h. 
Para tal, multiplique o valor em m/s por 3,6. */
void transforma_velocidade_ms_km() {

	float velMs = 15;
	float velKm = 0;

	velKm = velMs * 3.6;

	printf("Velocidade em %.2f km/h", velKm);
}