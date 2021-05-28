#define TAM 10

typedef struct {
	int *pEstruturaAuxiliar;
	int qtdElementos;
	int tamEstruturaAux;
}estrutura;

int menu();

void inicializar(estrutura vetorPrincipal[]);
void criarEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int tamanho);
void inserirValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int valor);
void removerValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux);
void printarEstrutura(estrutura vetorPrincipal[]);
void getDadosTodasEstruturas(estrutura vetorPrincipal[]);
void removerTodosValoresEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
void finalizar(estrutura vetorPrincipal[]);