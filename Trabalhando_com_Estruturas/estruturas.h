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
void alterarValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux, int valor);
void removerValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux);
void printarEstrutura(estrutura vetorPrincipal[]);
void getDadosTodasEstruturas(estrutura vetorPrincipal[]);
void removerTodosValoresEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
int getQuantidadeDadosTodasEstruturasAuxiliares(estrutura vetorPrincipal[]);
int getMaiorValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
int getMenorValorEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
int salvarElementosEmArquivo(estrutura vetorPrincipal[]);
void alterarTamanhoEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao, int novoTamanho);
int getQuantidadeDadosUmaEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
void finalizarUmaEstruturaAuxiliar(estrutura vetorPrincipal[], int posicao);
void finalizar(estrutura vetorPrincipal[]);

int verificaEspacoEstruturaPrincipal(estrutura vetorPrincipal[]);
int verificaPosicaoParaCriar(estrutura vetorPrincipal[], int posicao);
int verificaPosicaoParaInserir(estrutura vetorPrincipal[], int posicao);
int verificaPosicaoEstruturaAux(estrutura vetorPrincipal[], int posicao, int posicaoEstruturaAux);
int verificaTamanho(int tamanho);
int verificaNovoTamanho(estrutura vetorPrincipal[], int posicao, int novoTamanho);
int verificaEspacoEstruturaAux(estrutura vetorPrincipal[], int posicao);
int verificaEstruturaAuxVazia(estrutura vetorPrincipal[], int posicao);