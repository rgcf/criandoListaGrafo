/*
    Implementação de um grafo através de lista de adjacência 
    Professor: Carlos Jones Rebello Junior
    Disciplina: Teoria dos Grafos
    Engenharia da Controle e Automação - Ifes campus Linhares
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
    novaLista->noAtual = noAtual;
    novaLista->adj = criarListaAdj();
    novaLista->proxNo = lp;
    return novaLista;
}

//Nova lista adjacente elemento na Lista Principal
noAdj *inserirListaAdj(noListaPrincipal *lp, int noBase, int noConecto, float peso)
{
    lp = buscaVertice(lp, noBase);
    printf("vertice encontrado");
    if (lp)
    {
        printf("entrou no if do inserir lista adj");
        getchar();
        //verificando a posição do ponteiro da lista principal
        noAdj *novaAresta = (noAdj *)malloc(sizeof(noAdj));
        novaAresta->noAdjacente = noConecto;
        novaAresta->pesoEntreOsNos = peso;
        novaAresta->proxNoAdj = grafoAuxLA->adj;
        return novaAresta;

    }
    else
        printf("Vertice nao encontrado!");
}

//contando o numero de vertices
int numeroDeVertices(noListaPrincipal *lp)
{
    int numVertices = 0;
    while (lp)
    {
        numVertices++;
        lp = lp->proxNo;
    }
    return numVertices;
}

//buscar elementos na lista
noListaPrincipal *buscaVertice(noListaPrincipal *lp, int vertice)
{

    noListaPrincipal *busca = lp;
    printf("\nBuscando no %d, a partir de %d.\n", vertice, busca->noAtual);
    for (busca; busca != NULL; busca = busca->proxNo)
        if (busca->noAtual == vertice)
            return busca;
    printf("\nNo nao localizado!!!");
    return NULL;
}

void imprimeListaPrincipal(noListaPrincipal *lp)
{
    int elementos = 0;
    printf("\n");
    printf("Vertices:");
    printf("\n");

    while (lp)
    {
        printf("\t%d\t", lp->noAtual);
        printf("\n");
        lp = lp->proxNo;
        elementos++;
    }
    if (!elementos)
        printf("Vazia!");
    printf("\n");
}

void imprimeListaAdjVertice(int vertice)
{
    noListaPrincipal *lp = buscaVertice(grafoAuxLA, vertice);


    noAdj *la = lp->adj;
    int elementos = 0;
    printf("\n");
    printf("Vertices:");
    while (la)
    {
        printf("\tno %d - peso %f\t", la->noAdjacente, la->pesoEntreOsNos);
        printf("\n");
        la = la->proxNoAdj;
        elementos++;
    }
    if (!elementos)
        printf("Nenhum vertice localizado!");
    printf("\n");
}

void imprimeListaAdjVertAtual(noAdj *la)
{
    int elementos = 0;
    printf("\n");
    printf("Vertices:");
    while (la)
    {
        printf("\tno %d - peso %f\t", la->noAdjacente, la->pesoEntreOsNos);
        printf("\n");
        la = la->proxNoAdj;
        elementos++;
    }
    if (!elementos)
        printf("Nenhum vertice localizado!");
    printf("\n");
}



//----------------------------------------------------------------------------//
