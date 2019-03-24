/*
    Implementação de um grafo através de lista de adjacência 
    Professor: Carlos Jones Rebello Junior
    Disciplina: Teoria dos Grafos
    Engenharia da Controle e Automação - Ifes campus Linhares
    Última atualização: 07/03/2019
*/


//--------------------------INCLUSÃO DE BIBLIOTECAS---------------------------//
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
//----------------------------------------------------------------------------//

//--------------------------INCLUSÃO DAS FUNÇÕES---------------------------//

//Inicia uma lista vazia
noListaPrincipal *criarListaGrafo(void)
{
    printf("\n\nLista principal inicializada!!!");
    return NULL;
}

noAdj *criarListaAdj(void)
{
    printf("\n\nLista adjacente inicializada!!!");
    return NULL;
}

//Novo elemento na Lista Principal
noListaPrincipal *inserirNo(noListaPrincipal *lp, int noAtual)
{
    noListaPrincipal *novaLista = (noListaPrincipal *)malloc(sizeof(noListaPrincipal));
    novaLista.noAtual = noAtual;
    novalista.noAdj = criarListaAdj();
    novaLista.proxNo = lp;
    return novaLista;
}

//Nova lista adjacente elemento na Lista Principal
noAdj *inserirListaAdj(noAdj *la, int noBase, int noConecto, float peso)
{
     if (la = buscaVertice(la, noBase))
    {
        //verificando a posição do ponteiro da lista principal
        noAdj *novaListaAdj = (noAdj *)malloc(sizeof(noAdj));
        novaListaAdj.noAtual = noAtual;
        novaListaAdj.pesoEntreOsNos = peso;
        novaListaAdj.proxNo = lp;
        return novaListaAdj;
    }
    else
        printf("Vertice nao encontrado!");
  
}

//contando o numero de vertices
int numeroDeVertices(noListaPrincipal *lp)
{
    int numVertices = 0;
    while(lp){
        numVertices++
        lp = lp.proxNo;
    }
    return numVertices;
}

//buscar elementos na lista
noListaPrincipal* buscaVertice(noListaPrincipal* lp, int vertice)
{
    noListaPrincipal *busca;
    for(p = lp; p != NULL; p = p.proxNo)
        if (p.noAtual == vertice) {
            return p;
    return NULL;
}

void imprimeListaPrincipal (noListaPrincipal *lp)
{
    int elementos = 0;
    printf("\n");
    printf("Vertices:");
    while(lp){
        printf("\t%d\t", lp.noAtual);
    	printf("\n");
        lp = lp->noAtual;
		numElem++;
    }
    if(!elementos)
        printf("Vazia!");
    printf("\n");
}


//----------------------------------------------------------------------------//
