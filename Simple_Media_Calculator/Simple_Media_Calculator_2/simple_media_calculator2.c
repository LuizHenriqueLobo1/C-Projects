#include <stdio.h>

void calculoSoma(int val[], int *qtdVal);
void calculoMedia(int val[], int *qtdVal);

int main() {

    int qtdValores = 999;
    int valores[qtdValores];
    int opc = 0;

    printf("\nDigite a quantidade de valores: ");
    scanf("%d", &qtdValores);

    printf("\nDigite os valores:\n");
    
    for(int i = 0 ; i < qtdValores ; i++) {
        scanf("%d", &valores[i]);
    }

    printf("\n# Menu #\n(1) - Calculo SOMA\n(2) - Calculo MEDIA\n\nResposta: ");
    scanf("%d", &opc);

    switch(opc) {

        case 1: {
            calculoSoma(valores, &qtdValores);
            break;
        }

        case 2: {
            calculoMedia(valores, &qtdValores);
            break;
        }

        default: {
            printf("\n\n\nERROR!!!\n\n\n");
            break;
        }

    }

    return 0;
}

void calculoSoma(int val[], int *qtdVal) {

    int somaValores = 0;

    for(int i = 0 ; i < *qtdVal ; i++) {
        somaValores += val[i];
    }

    printf("\nSoma dos valores: %d\n\n", somaValores);
}

void calculoMedia(int val[], int *qtdVal) {

    int somaValores = 0;
    int mediaValores = 0;

    for(int i = 0 ; i < *qtdVal ; i++) {
        somaValores += val[i];
    }

    mediaValores = somaValores / *qtdVal;

    printf("\nMedia dos valores: %d\n\n", mediaValores);
}