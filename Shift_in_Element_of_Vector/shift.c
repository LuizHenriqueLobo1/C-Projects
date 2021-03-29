#include <stdio.h>

int main() {

  	int i;
  	int n = 0;
  	int a[100];
  	int temp = 0;
  	int pos = 0;
 
    printf("\nDigite o numero de elementos: ") ;
    scanf("%d",&n);
 
    printf("\nDigite os elementos:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
    printf("\nVetor original\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nDigite a posicao do elemento que deseja retirar: ");
    scanf("%d", &pos);
    pos--;

  	for(i = pos; i < n; i++) {
  		a[i] = a[i+1];
  	}
 
  	a[n-1] = 0;
    n--;

    printf("\nNovo vetor\n");
    for(i = 0; i < n; i++) {
    	printf("%d ", a[i]);
    }

    return 0;
}