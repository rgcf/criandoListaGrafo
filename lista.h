#ifndef LISTA
#define LISTA


/* define o tipo nó adjacente do grafo*/
typedef struct noAdj 
{	
	int noAdjacente;
	float pesoEntreOsNos;
	struct noAdj *proxNoAdj; //ponteiro para o próximo nó da lista 
}noAdj;

/* define o tipo nó do grafo, que é o próprio grafo*/
typedef struct noListaPrincipal 
{	
	int noAtual;
	int numLigacoes;
	struct noListaPrincipal *proxNo; //ponteiro para o próximo nó da lista 
	struct noAdj *adj; //lista de nós adjacentes  
}noListaPrincipal;

noListaPrincipal *grafoAuxLA;

//Identificando as funções
noListaPrincipal* criarListaGrafo(void);

noAdj* criarListaAdj(void);

noListaPrincipal* inserirNo(noListaPrincipal* lp, int noAtual);

noAdj* inserirListaAdj(noListaPrincipal *lp, int noBase, int noConecto, float peso);

int numeroDeVertices(noListaPrincipal *lp);

noListaPrincipal* buscaVertice(noListaPrincipal* lp, int vertice);

void imprimeListaPrincipal(noListaPrincipal *lp);

void imprimeListaAdjVertice(int vertice);

void imprimeListaAdjVertAtual(noAdj *la);

noListaPrincipal *removeVertice(noListaPrincipal *lp, int vertice);

noAdj *removeAdj(noAdj *la, int verticeAdj);//Tem que criar esse aqui

#endif