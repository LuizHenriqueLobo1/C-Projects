#include <stdio.h>
#include <stdlib.h>

/* RESOLUÇÃO DE PROVAS */

//Q2 - Prova 31/01/2018
int main() {
	
	float LDL, HDL, TRIG, CT;
	
	printf("Digite o valor do Colesterol Total:\n");
	scanf("%f", &CT);
	
	printf("Digite o HDL-Colesterol:\n");
	scanf("%f", &HDL);
	
	printf("Digite a quantidade de Trigliceridios:\n");
	scanf("%f", &TRIG);
	
	LDL = (CT - HDL) - (TRIG * 0.2);
	
	if(LDL < 100) {
		printf("\nOtimo\n");
	}
	else if(LDL == 100 || LDL <= 129) {
		printf("\nSub-otimo\n");
	}
	else if(LDL == 130 ||  LDL < 159) {
		printf("\nLimitrofe\n");
	}
	else if(LDL == 160 ||  LDL < 189) {
	    printf("\nAlto\n");	
	}
	else
	    printf("\nMuito alto\n");
	
	return 0;
}

//Q4 - Prova 22/07/2014
int main() {
	
	int Dia, Mes;
	
	printf("Digite um dia:\n");
	scanf("%d", &Dia);
	
	printf("Digite um mes:\n");
	scanf("%d", &Mes);
	
	switch(Dia) {
		
		case 1:
			printf("\nPrimeiro");
				break;
		case 2:
			printf("\nDois");
				break;
		case 3:
			printf("\nTres");
				break;
		case 4:
			printf("\nQuatro");
				break;
		case 5:
			printf("\nCinco");
				break;
		case 6:
			printf("\nSeis");
				break;
		case 7:
			printf("\nSete");
				break;
		case 8:
			printf("\nOito");
				break;
		case 9:
			printf("\nNove");
				break;
		case 10:
			printf("\nDez");
				break;
		case 11:
			printf("\nOnze");
				break;
		case 12:
			printf("\nDoze");
				break;
		case 13:
			printf("\nTreze");
				break;
		case 14:
			printf("\nQuatorze");
				break;
		case 15:
			printf("\nQuinze");
				break;
		case 16:
			printf("\nDezesseis");
				break;
		case 17:
			printf("\nDezessete");
				break;
		case 18:
			printf("\nDezoito");
				break;
		case 19:
			printf("\nDezenove");
				break;
		case 20:
			printf("\nVinte");
				break;
		case 21:
			printf("\nVinte e um");
				break;
		case 22:
			printf("\nVinte e dois");
				break;
		case 23:
			printf("\nVinte e tres");
				break;
		case 24:
			printf("\nVinte e quatro");
				break;
		case 25:
			printf("\nVinte e cinco");
				break;
		case 26:
			printf("\nVinte e seis");
				break;
		case 27:
			printf("\nVinte e sete");
				break;
		case 28:
			printf("\nVinte e oito");
				break;
		case 29:
			printf("\nVinte e nove");
				break;
		case 30:
			printf("\nTrinta");
				break;
		case 31:
			printf("\nTrinta e um");
				break;
		default:
			printf("\nValor incorreto!\n");
				break;
	}

	switch(Mes) {
		
		case 1:
			printf(" de Janeiro");
		        break;
		case 2:
			printf(" de Fevereiro");
				break;
		case 3:
			printf(" de Marco");
				break;
		case 4:
			printf(" de Abril");
				break;
		case 5:
			printf(" de Maio");
				break;
		case 6:
			printf(" de Junho");
				break;
		case 7:
			printf(" de Julho");
				break;
		case 8:
			printf(" de Agosto");
				break;
		case 9:
			printf(" de Setembro");
				break;
		case 10:
			printf(" de Outubro");
				break;
		case 11:
			printf(" de Novembro");
				break;
		case 12:
			printf(" de Dezembro");
				break;
		default:
			printf("\nValor incorreto!\n");
				break;	
	}
	
	return 0;
}

//Q4 - Prova 22/07/2014
int main() {
	
	int Dia, Mes, Uni, Dez;
	
	printf("Digite o dia e o mes:\n");
	scanf("%d%d", &Dia, &Mes);
	
	Dez = Dia / 10;
	Uni = Dia % 10;
	
	if(Dez > 1) {
		
		switch(Dez) {
			case 2: printf("\nVinte "); break;
			case 3: printf("\nTrinta "); break;
		}
		if(Uni != 0)
			printf("e");
	}
	else if(Dez == 1) {
		
		switch(Uni) {
			
			case 0: printf("Dez "); break;
			case 1: printf("Onze "); break;
		    case 2: printf("Doze "); break;
			case 3: printf("Treze "); break;
			case 4: printf("Quatorze "); break;
			case 5: printf("Quinze "); break;
			case 6: printf("Dezesseis "); break;
			case 7: printf("Dezessete "); break;
			case 8: printf("Dezoito "); break;
			case 9: printf("Dezenove "); break;
		}
	}
	if(Dez == 0) {
		
		switch(Uni) {	
		
		case 1: if(Dez != 0)
					printf("Um ");
				else
					printf("Primeiro ");
					break;
		
		case 2: printf("Dois "); break;
		case 3: printf("Tres "); break;
		case 4: printf("Quatro "); break;
		case 5: printf("Cinco "); break;
		case 6: printf("Seis "); break;
		case 7: printf("Sete "); break;
		case 8: printf("Oito "); break;
		case 9: printf("Nove "); break;	
		}
	}
	
	printf("de ");
	
	switch(Mes) {
		
		case 1: printf("Janeiro"); break;
		case 2: printf("Fevereiro"); break;
		case 3: printf("Marco"); break;
		case 4: printf("Abril"); break;
		case 5: printf("Maio"); break;
		case 6: printf("Junho"); break;
		case 7: printf("Julho"); break;
		case 8: printf("Agosto"); break;
		case 9: printf("Setembro"); break;
		case 10: printf("Outubro"); break;
		case 11: printf("Novembro"); break;
		case 12: printf("Dezembro"); break;
	}
	
	return 0;
}

int main() {
	
	int Cod, D1, D2, D3, D4, D5;
	
	printf("Digite o codigo:\n");
	scanf("%d", &Cod);
	
	D1 = Cod / 1000;
	D2 = (Cod % 1000) / 100;
	D3 = (Cod % 100) / 10;
	D4 = Cod % 100;
	D5 = ((D2+D4) + (D1+D3)) * 3;
	
	if (D5 % 10 != 0)
	{
		D5 = 10 - (D5 % 10);
	}
	else
		D5 = 0;
		
	Cod = ((D1 * 10000) + (D2 * 1000) + (D3 * 100) + (D4 * 10) + D5);
	
	printf("Codigo com digito verificador:\n%d", Cod);
	
	return 0;
}

/*Conversor de decimal para binario*/
int main() {
	
	int N, B0, B1, B2, B3, B4, B5, B6, Bin;
	
	printf("Digite um valor decimal menor que 128:\n");
	scanf("%d", &N);
	
	B0 = N % 2;
	N = N / 2;
	B1 = N % 2;
	N = N / 2;
	B2 = N % 2;
	N = N / 2;
	B3 = N % 2;
	N = N / 2;
	B4 = N % 2;
	N = N / 2;
	B5 = N % 2;
	B6 = N / 2;
	
	Bin = (B6 * 1000000) + (B5 * 100000) + (B4 * 10000) + (B3 * 1000) + (B2 * 100) + (B1 * 10) + B0;
	
	printf("Valor em binario:\n%d", Bin);
	
	return 0;
}

//Q1 - Prova 19/12/2018
int main() {
	
	int N, D0, D1, D2, D3, D4, Bin;
	int X0, X1, X2, X3, X4, R;
	
	printf("Digite um numero inteiro entre 0 e 32:\n");
	scanf("%d", &N);
	
	D0 = N % 2;
	N = N / 2;
	D1 = N % 2;
	N = N / 2;
	D2 = N % 2;
	N = N / 2;
	D3 = N % 2;
	D4 = N / 2;
	
	if(D0 == 1) {
		X0 = 1;	
	}
	else {
		X0 = 0;
	}
	if(D1 == 1) {
		X1 = 1;	
	}
	else {
		X1 = 0;
	}
	if(D2 == 1) {
		X2 = 1;	
	}
	else {
		X2 = 0;
	}
	if(D3 == 1) {
		X3 = 1;	
	}
	else {
		X3 = 0;
	}
	if(D4 == 1) {
		X4 = 1;	
	}
	else {
		X4 = 0;
	}
	
	R = X0 + X1 + X2 + X3 + X4;
	
	printf("Total de digitos 1 existente:\n%d", R);

	return 0;
}

/*Separando numeros em suas respectivas casas*/
int main() {
	
	int Num;
	int D1, D2, D3, D4;
	
	scanf("%d", &Num);
	
	D1 = Num / 1000;
	D2 = (Num % 1000) / 100;
	D3 = (Num % 100) / 10;
	D4 = Num % 10;
	 
	printf("%d %d %d %d", D1, D2, D3, D4);
	
	return 0;
}