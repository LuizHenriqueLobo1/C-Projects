#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() { // Cálculo da Área do Círculo
	
	float Pi;
	float R;
	float R2;
	float Area;
	
	printf("Digite o valor do raio:\n");
	scanf("%f", &R);
	
	Pi = 3.14;
	
	R2 = R * R;
	
	Area = Pi * R2;
	
	printf("Valor da area:\n%f", Area);
	
	return 0;
}

int main() { // Soma Simples
	
	int A;
	int B;
	int SOMA;
	
	printf("Digite o primeiro numero para a soma:\n");
	scanf("%d", &A);
	
	printf("Digite o segundo numero para a soma:\n");
	scanf("%d", &B);
	
	SOMA = A + B;
	
	printf("Resultado:\n%d", SOMA);
	
	return 0;
}

// TC = Temperatura em Celsius and TF = Temperatura em Fahrenheit

int main() { // Convertor TC para TF
	
	float TC, TF;
	
	printf("Digite o valor em Celsius:\n");
	scanf("%f", &TC);
	
	TF = TC * 9 / 5 + 32; 
	
	printf("Resultado:\n%.3f", TF);
	
	return 0;
}

int main() { // Convertor TF para TC
	
	float TF, TC;
	
	printf("Digite o valor em Fahrenheit:\n");
	scanf("%f", &TF);
	
	TC = (TF - 32) * 5 / 9;
	
	printf("Resultado:\n%.3f", TC);
	
	return 0;
}

int main() { //Estrutura de decisão simples
	
	int Num;
	
	printf("Acerte o numero:\n");
	scanf("%d", &Num);
	
	if(Num==10)
	{
	printf("Voce acertou!\n");
	printf("O numero e igual a 10.\n");
	}
	else
	{
	printf("Voce errou!\n");
	printf("O numero e diferente de 10.\n");
	}
	
	return 0;
}

/*-----------------RESOLUÇÃO DA LISTA-----------------*/

//Q1
int main() {
	
	int TB, TH, CA, CP;
	
	printf("Digite o tamanho da base:\n");
	scanf("%d", &TB);
	
	printf("Digite o tamanho da altura:\n");
	scanf("%d", &TH);
	
	CA = TB * TH;
	
	CP = (TB * 2) + (TH * 2);
	
	printf("Calculo da area:\n%d\n", CA);
	printf("Calculo do perimetro:\n%d", CP);
	
	return 0;
}

//Q2
int main() {
	
	int LQ, CA, CP;
	
	printf("Digite o tamanho do lado do quadrado:\n");
	scanf("%d", &LQ);
	
	CA = LQ * LQ;
	
	CP = LQ + LQ + LQ + LQ;
	
	printf("Calculo da area do quadrado:\n%d"\n, CA);
	printf("Calculo do perimetro do quadrado:\n%d", CP);
	
	return 0;
}

//Q3
int main() {
	
	float R, CA, CP;
	
	printf("Digite o tamanho do raio:\n");
	scanf("%f", &R);
	
	CA = 3.14 * pow(R, 2);
	
	CP = 2 * 3.14 * R;
	
	printf("Calculo da area:\n%.2f\n", CA);
	printf("Calculo do perimetro:\n%.2f", CP);
	
	return 0;
}

//Q4
int main() {
	
	int L1, L2, L3, P;
	
	printf("Digite o primeiro lado:\n");
	scanf("%d", &L1);
	
	printf("Digite o segundo lado:\n");
	scanf("%d", &L2);
	
	printf("Digite o terceiro lado:\n");
	scanf("%d", &L3);
	
	P = L1 + L2 + L3;
	
	printf("Calculo do perimetro:\n%d", P);
	
	return 0;
}

//Q5
int main() {
	
	int Num, Su;
	
	printf("Digite um numero qualquer:\n");
	scanf("%d", &Num);
	
	Su = Num + 1;
	
	printf("O sucessor do numero digitado:\n%d", Su); 

	return 0;
}

//Q6
int main() {
	
	int N1, N2, Quo, Res;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &N1);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &N2);
	
	Quo = N1 / N2;
	
	Res = N1 % N2;
	
	printf("Quociente:\n%d\n", Quo);
	printf("Resto da divisao:\n%d", Res);
	
	return 0;
}

//Q7
int main() {
	
	int IdadeD, IdadeM, IdadeA;
	
	printf("Digite sua idade em dias:\n");
	scanf("%d", &IdadeD);
	
	IdadeA = IdadeD / 365;
	
	IdadeM = IdadeD / 30;
	
	printf("Idade em anos:\n%d\n", IdadeA);
	printf("Idade em meses:\n%d", IdadeM);
	
	return 0;
}

//Q8
int main(){
	
	float TF, TC;
	
	printf("Digite o valor em Fahrenheit:\n");
	scanf("%f", &TF);
	
	TC = (TF - 32) * 5 / 9;
	
	printf("Resultado:\n%.3f", TC);
	
	return 0;
}

//Q9
int main() {
	
	float R, H, AB, Vol;
	
	printf("Digite o raio:\n");
	scanf("%f", &R);
	
	printf("Digite a altura:\n");
	scanf("%f", &H);
	
	AB = 3.14 * pow(R, 2);
	
	Vol = AB * H;
	
	printf("Resultado:%.2f\n", Vol);
	
	return 0;
}

//Q10
int main() {
	return 0;
}

//Q11
int main() {
	
	float N1B1, N2B1, N1B2, N2B2;
	float NT1, NT2, NTS;	
	
	printf("Digite a nota 1 do primeiro bimestre:\n");
	scanf("%f", &N1B1);
	
	printf("Digite a nota 2 do primeiro bimestre:\n");
	scanf("%f", &N2B1);
	
	printf("Digite a nota 1 do segundo bimestre:\n");
	scanf("%f", &N1B2);
	
	printf("Digite a nota 2 do segundo bimestre:\n");
	scanf("%f", &N2B2);
	
	
	NT1 = (N1B1 + N2B1) / 2;
	
	NT2 = (N1B2 + N2B2) / 2;
	
	NTS = (NT1 + NT2) / 2;
	
	printf("Nota semestral:\n%.2f", NTS);
	
	return 0;
}

//Q12
int main() {
	
	float VMS, VKMH;
	
	printf("Digite a velocidade em m/s:\n");
	scanf("%f", &VMS);
	
	VKMH = VMS * 3.6;
	
	printf("Valor em km/h:\n%.2f", VKMH);
	
	return 0;
}

//Q13
int main() {
	
	float R1, R2, R3, RE;
	
	printf("Digite a R1:\n");
	scanf("%f", &R1);
	
	printf("Digite a R2:\n");
	scanf("%f", &R2);
	
	printf("Digite a R3:\n");
	scanf("%f", &R3);
	
	RE = R1 + R2 + R3;
	
	printf("Resultado:\n%.2f", RE);
	
	return 0;
}