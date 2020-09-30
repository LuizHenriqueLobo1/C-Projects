#include <stdio.h>

int main() {
    
    int *p;
    int i;
    int qtdElementos;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &qtdElementos);

    p = (int *)(malloc(qtdElementos * sizeof(int)));

    if(p == NULL) {
        printf("ERRO!!!");
        system("pause");
    }

    printf("Digite os elementos: ");
    for(i = 0 ; i < qtdElementos ; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0 ; i < qtdElementos ; i++) {
        printf("Elemento -> %d", p[i]);
    }

    free(p);

    return 0;
}