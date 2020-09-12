#include <stdio.h>

void bubble(int vet[], int *tamVet);
void selection(int vet[], int *tamVet);
void insertion(int vet[], int *tamVet);

int main() {

    int tamVetor = 9999;
    int vetor[tamVetor];
    int opc;

    printf("\nInforme o tamanho do vetor: ");
    scanf("%d", &tamVetor);

    printf("\nPreencha o vetor:\n");
    for(int i = 0 ; i < tamVetor ; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\n------------------------------------\n");
    printf("1-Bubble / 2-Selection / 3-Insertion");
    printf("\n------------------------------------\n");
    printf("\nEscolha uma das opcoes: ");
    scanf("%d", &opc);
	
    switch(opc) {

        case 1: bubble(vetor, &tamVetor); break;

        case 2: selection(vetor, &tamVetor); break;

        case 3: insertion(vetor, &tamVetor); break;

		default: printf("\n\nERRO!!!\n\n"); break;

    }

    return 0;
}

void bubble(int vet[], int *tamVet) {
	
	int i, j, aux;
	
	for(i = 0 ; i < *tamVet ; i++)  {
		for(j = 0 ; j < *tamVet - i - 1 ; j++) {
			if(vet[j] > vet[j + 1]) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j+1] = aux;
			}
		}
	}
	
	printf("\nVetor ordenado:");
	for(i = 0 ; i < *tamVet ; i++) {
		printf("\n%d", vet[i]);
	}
    printf("\n\n");
}

void selection(int vet[], int *tamVet) {
	
	int i, j, min, aux;
  
    for (i = 0 ; i < (*tamVet - 1) ; i++) {
        min = i;
            for (j = i + 1 ; j < *tamVet ; j++) {
                if (vet[j] < vet[min]) {
    	            min = j;
                }
            }
    
                if (i != min) {
                    aux = vet[i];
                    vet[i] = vet[min];
                    vet[min] = aux;
                }
  }
  
    printf("\nVetor ordenado:");
	for(i = 0 ; i < *tamVet ; i++) {
		printf("\n%d", vet[i]);
	}
    printf("\n\n");
}

void insertion(int vet[], int *tamVet) {

    int i, j, key;
	 
    for (i = 1 ; i < *tamVet ; i++) { 
        key = vet[i]; 
        j = i - 1; 
  
            while (j >= 0 && vet[j] > key) { 
                vet[j + 1] = vet[j]; 
                j = j - 1; 
            } 
        vet[j + 1] = key;
    }
    
    printf("\nVetor ordenado:");
	for(i = 0 ; i < *tamVet ; i++) {
		printf("\n%d", vet[i]);
	}
    printf("\n\n");
}