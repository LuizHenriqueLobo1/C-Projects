#include <stdio.h>
#include <stdlib.h>

//Lista Exercícios --- Estrutura de Seleção --- Prof. Romilson

//Q1
int main() {
	
	char L;
	
	printf("Digite a letra:\n");
	scanf("%c", &L);
	
	if(L == 'a')
	{
	printf("A letra e uma vogal");
	}
	
	else if(L == 'e')
	{
	printf("A letra e uma vogal");
	}
	
	else if(L == 'i')
	{
	printf("A letra e uma vogal");
	}
	
	else if(L == 'o')
	{
	printf("A letra e uma vogal");
	}
	
	else if(L == 'u')
	{
	printf("A letra e uma vogal");
	}
	
	else
	{
	printf(" A letra e uma consoante");
	}
	
	return 0;	
}

//Q2
int main() {
	
	int A, B, C;
	int I, J, K, L, M, N;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	printf("Digite o terceiro valor:\n");
	scanf("%d", &C);
	
	if(B > C & C > A){
	I = B + C;
	printf("Valor da maior soma:\n%d", I);
	}
	
	else if(C > B & B > A){
	J = C + B;
	printf("Valor da maior soma:\n%d", J);
	}
	
	else if(A > B & B > C){
	K = A + B;
	printf("Valor da maior soma:\n%d", K);
	}
	
	else if(B > A & A > C){
	L = B + A;
	printf("Valor da maior soma:\n%d", L);
	}	
	
	else if(A > C & C > B){
	M = A + C;
	printf("Valor da maior soma:\n%d", M);
	}
	
	else {
	N = C + A;
	printf("Valor da maior soma:\n%d", N);
	}
	
	return 0;	
}

//Q3
int main() {
	
	int Num;
	
	printf("Digite um numero qualquer:\n");
	scanf("%d", &Num);
	
	if(Num % 2 == 0){
	printf("Este numero e par");	
	}
	
	else{
	printf("Este numero nao e par");
	}
	
	return 0;
}

//Q4
int main() {
	
	int N, N2;
	
	printf("Digite um numero qualquer:\n");
	scanf("%d", &N);
	
	N2 = N * N;
	
	printf("O quadrado desse numero e:\n%d", N2);
	
	return 0;
}