#include <stdio.h>

int calculaSoma(int val[], int *qtdVal);
int calculaMedia(int val[], int *qtdVal);

int main() {

    int qtdValores;
    int *v;
    int somaValores = 0;
    int mediaValores = 0;
    int opc;

    v = (int *)(malloc(qtdValores * sizeof(int)));
    
    printf("\nDigite a quantidade de valores: ");
    scanf("%d", &qtdValores);

    printf("\nDigite os valores:\n");

    for(int i = 0 ; i < qtdValores ; i++) {
        scanf("%d", &v[i]);
    }

    printf("\n# Menu #\n(1)-Soma dos valores\n(2)-Media dos valores\n\nR: ");
    scanf("%d", &opc);

    switch(opc) {

        case 1: {
            somaValores = calculaSoma(v, &qtdValores);
            printf("\nSoma dos valores: %d\n\n", somaValores);
            break;
        }

        case 2: {
            mediaValores = calculaMedia(v, &qtdValores);
            printf("\nMedia dos valores: %d\n\n", mediaValores);
            break;
        }
    
        default: {
            printf("\n\n\nERROR!!!\n\n\n");
            break;
        }
    }

    return 0;
}

int calculaSoma(int val[], int *qtdVal) {
    
    int somaValores = 0;

    for(int i = 0 ; i < *qtdVal ; i++) {
        somaValores += val[i];
    }
    
    return somaValores;
}

int calculaMedia(int val[], int *qtdVal) {

    int mediaValores = 0;
    int somaValores = 0;

    for(int i = 0 ; i < *qtdVal ; i++) {
        somaValores += val[i];
    }

    mediaValores = somaValores / *qtdVal;

    return mediaValores;
}