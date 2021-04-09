#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int num[5];
    int positivo = 0;
    int negativo = 0;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        num[i] = (rand() % 21);
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("N %d: %d\n", i+1, num[i]);
    }

    return 0;
}