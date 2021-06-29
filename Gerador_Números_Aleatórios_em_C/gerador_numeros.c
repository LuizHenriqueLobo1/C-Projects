#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int menu();
void numerosAleatorios(int qtd);

int main() {
        
    int loop = 1;
    int opcao;
    int qtdNumeros;

    while(loop == 1) {

        opcao = menu();

        switch(opcao) {

            case 0: {
                printf("\nPROGRAMA ENCERRADO\n");
                loop = 0;
                break;
            }

            case 1: {
                printf("\nDIGITE QUANTOS NUMEROS QUER GERAR > ");
                scanf("%d", &qtdNumeros);

                numerosAleatorios(qtdNumeros);
                break;
            }

            default: {
                printf("\nOPCAO INVALIDA\n");
                break;
            }
        }
    }

    return 0;
}

void numerosAleatorios(int qtd) {

    int i;
    int num[qtd];
    int positivo = 0;
    int negativo = 0;

    srand(time(NULL));

    for (i = 0; i < qtd; i++) {
        num[i] = (rand() % 21);
    }

    printf("\n");
    for (i = 0; i < qtd; i++) {
        printf("N %d: %d\n", i+1, num[i]);
    }
}

int menu() {
    
    int opcao;

    printf("\n---------- MENU -----------\n");
    printf("0. SAIR\n");
    printf("1. GERAR NUMEROS ALEATORIOS\n");
    printf("---------------------------");
    printf("\n> ");
    scanf("%d", &opcao);

    return opcao;
}