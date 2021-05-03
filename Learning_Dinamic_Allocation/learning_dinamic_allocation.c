#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *p;
    int i;
    int qtdElementos;

    printf("\nDigite a quantidade de elementos: ");
    scanf("%d", &qtdElementos);

    p = (int *)(malloc(qtdElementos * sizeof(int)));

    if(p == NULL) {
        printf("ERRO!!!");
    }

    printf("\nDigite os elementos\n");
    for(i = 0 ; i < qtdElementos ; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0 ; i < qtdElementos ; i++) {
        printf("\nElemento -> %d\n", p[i]);
    }

    free(p);

    return 0;
}