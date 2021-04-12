#include <stdio.h>

#include "desafios_funcoes.h"

int main() {

	distribuicaoOtimaNotas(); // Questão Atual

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

/* 13.Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo
e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular
a resistência equivalente desse circuito. */
void calcula_resistencia_equivalente() {

	float r1 = 5;
	float r2 = 3;
	float r3 = 8;
	float re = 0;

	re = r1 + r2 + r3;

	printf("Resistencia equivalente: %.2f", re);
}

/* 14.Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes
informações:
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros */
void sincronizar_semaforos_cidade() {
	
	// Variáveis de distância são em metros, velocidade são em m/s, tempo são em segundos.

	float distanciaSemaforo = 0;
	float velocidadePermitida = 0;
	float aceleracaoCarro = 0;

	printf("Digite a distancia do semaforo (m): ");
	scanf("%f", &distanciaSemaforo);

	printf("Digite a velocidade permitida na via (m/s): ");
	scanf("%f", &velocidadePermitida);
	
	printf("Digite a acelaracao do veiculo (m/s): ");
	scanf("%f", &aceleracaoCarro);

	float tempoAlcancarVelPermitida = 0;
	tempoAlcancarVelPermitida = velocidadePermitida / aceleracaoCarro;

	float distanciaPercorridaNesseTempo = 0;
	distanciaPercorridaNesseTempo = aceleracaoCarro * 
	(tempoAlcancarVelPermitida * tempoAlcancarVelPermitida) / 2;

	float distanciaRestante = 0;
	distanciaRestante = distanciaSemaforo - distanciaPercorridaNesseTempo;

	float tempoParaAlcancarFinal = 0;
	tempoParaAlcancarFinal = distanciaRestante / velocidadePermitida;

	float tempoParaAbrirSemaforo = 0;
	tempoParaAbrirSemaforo = tempoParaAlcancarFinal - 3;

	printf("Aceleracao do carro: %.2f m/s", aceleracaoCarro);
	printf("\nTempo para alcancar velocidade permitida: %.2f segundos", tempoAlcancarVelPermitida);
	printf("\nDistancia percorrida nesse tempo: %.2f metros", distanciaPercorridaNesseTempo);
	printf("\nDistancia restante: %.2f metros", distanciaRestante);
	printf("\nTempo para alcancar o final: %.2f segundos", tempoParaAlcancarFinal);
	printf("\nTempo para abrir semaforo: %.2f segundos", tempoParaAbrirSemaforo);
}

/* 15.Num dia de sol, você deseja medir a altura de um prédio, porém, 
a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra e
a do prédio no chão, e que você lembre da sua altura, faça um programa para ler
os dados necessários e calcular a altura do prédio. */
void medir_altura_predio_sombra() {

	float alturaPessoa = 0;
	float alturaPredio = 0;
	float sombraPessoa = 0;
	float sombraPredio = 0;

	printf("\nDigite sua altura em metros: ");
	scanf("%f", &alturaPessoa);

	printf("\nDigite a altura da sua sobra em metros: ");
	scanf("%f", &sombraPessoa);

	printf("\nDigite a altura da sombra do predio em metros: ");
	scanf("%f", &sombraPredio);

	alturaPredio = sombraPredio * (alturaPessoa / sombraPessoa);

	printf("\nA altura do predio e aproximadamente %.2f metros\n", alturaPredio);
}

/* 16.Escreva um programa para gerar o invertido de um número 
com três algarismos (exemplo: o invertido de 498 é 894). */
void inverter_numero_tres_algorismos() {

	int num = 0;
	int digito1 = 0;
	int digito2 = 0;
	int digito3 = 0;
	int digito1in = 0;
	int digito2in = 0;
	int digito3in = 0;
	int numInvertido = 0;

	printf("\nDigite um numero de 3 algorismos para ser invertido: ");
	scanf("%d", &num);

	digito1 = num / 100;
	digito2 = (num % 100) / 10;
	digito3 = num % 10;

	digito1in = digito1;
	digito2in = digito2 * 10;
	digito3in = digito3 * 100;

	numInvertido = digito3in + digito2in + digito1in;

	printf("\nNumero invertido: %d\n", numInvertido);
}

/* 17.Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível.
Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota
de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00.
Escreva um programa que receba o valor da quantia solicitada e retorne adistribuição 
das notas de acordo com o critério da distribuição ótima (considere existir notas de R$1,00; 
R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00). */

void distribuicaoOtimaNotas() {  
	
	int dinheiro = 0;
	int notasAux = 0;
	
	printf("\nDigite o valor: ");
	scanf("%d", &dinheiro);
	
	notasAux = dinheiro / 100;
	dinheiro = dinheiro - (notasAux * 100);
	printf("\nNotas de 100: %d", notasAux);
	
	notasAux = dinheiro / 50;
	dinheiro = dinheiro - (notasAux * 50);
	printf("\nNotas de 50: %d", notasAux);
	
	notasAux = dinheiro / 20;
	dinheiro = dinheiro - (notasAux * 20);      
	printf("\nNotas de 20: %d", notasAux);
	
	notasAux = dinheiro / 10;
	dinheiro = dinheiro - (notasAux * 10);        
	printf("\nNotas de 10: %d", notasAux);
	
	notasAux = dinheiro / 5;
	dinheiro = dinheiro - (notasAux * 5);
	printf("\nNotas de 5: %d", notasAux);
	
	notasAux = dinheiro / 2;
	dinheiro = dinheiro - (notasAux * 2);
	printf("\nNotas de 2: %d", notasAux);
	
	notasAux = dinheiro / 1;
	dinheiro = dinheiro - notasAux;
	printf("\nNotas de 1: %d\n", notasAux);
}