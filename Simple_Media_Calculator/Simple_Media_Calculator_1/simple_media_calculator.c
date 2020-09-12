#include <stdio.h>

void calculoSoma();
void calculoMedia();

int main() {

    int opc;

    printf("\n\t### MENU ###");
    printf("\n----------------------------\n");
    printf("(1) Calculo da SOMA\n");
    printf("(2) Calculo da MEDIA");
    printf("\n----------------------------\n");

    printf("\nEscolha uma das opcoes: ");
    scanf("%d", &opc);

    switch(opc) {

        case 1: {
            calculoSoma();
            break;
        }

        case 2: {
            calculoMedia(); 
            break;
        }

        default: printf("\n\n\nERRO!!!\n\n\n"); break;

    }

    return 0;
}

void calculoSoma() {

    int qtdValores = 999;
    int valores[qtdValores];
    int somaValores = 0;
    int i;

    printf("\nDigite a quantidade de valores: ");
    scanf("%d", &qtdValores);

    printf("\nDigite os valores:\n");
    
    for(i = 0 ; i < qtdValores ; i++) {
        scanf("%d", &valores[i]);
        somaValores += valores[i];
    }

    printf("\nSoma dos valores: %d\n\n", somaValores);
}

void calculoMedia() {

    int qtdValores = 999;
    int valores[qtdValores];
    int somaValores = 0;
    int mediaValores = 0;
    int i;

    printf("\nDigite a quantidade de valores: ");
    scanf("%d", &qtdValores);

    printf("\nDigite os valores:\n");

    for(i = 0 ; i < qtdValores ; i++) {
        scanf("%d", &valores[i]);
        somaValores += valores[i];
    }

    mediaValores = (somaValores / qtdValores);

    printf("\nMedia dos valores: %d\n\n", mediaValores);
}