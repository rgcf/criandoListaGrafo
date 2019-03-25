#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    unsigned int numNos, numAdj, j, i = 1;
    system("clear");
    printf("Insira o numero total de nos existentes:\n");
    scanf("%d", &numNos);
    printf("Criando a lista com %d nos...", numNos);

    noListaPrincipal *grafoPrincipal, *grafoAux; //Cria os ponteiros para lista principal
    noAdj *listaAdj;                             //cria ponteiros para a lista adjacente

    grafoPrincipal = criarListaGrafo();

    grafoPrincipal = inserirNo(grafoPrincipal, 1);
    printf("No inserido\n");
    grafoPrincipal = inserirNo(grafoPrincipal, 2);
    printf("No inserido\n");
    grafoPrincipal = inserirNo(grafoPrincipal, 3);
    printf("No inserido\n");
    getchar();
    grafoAux = grafoAuxLA = grafoPrincipal;

    getchar();

    imprimeListaPrincipal(grafoAux);

    getchar();

    grafoAuxLA->adj = inserirListaAdj(grafoAux->adj, grafoAux, 1, 2, 1.0);
    printf("No adjacente inserido\n");

    getchar();

    imprimeListaAdjVertAtual(grafoAux->adj);
    printf("teste enviando a lista adj");

    getchar();

    grafoAuxLA = grafoPrincipal;

    imprimeListaAdjVertice(3);
    printf("por vertice 3");

    getchar();

    grafoAux = grafoAuxLA = grafoPrincipal;

    imprimeListaPrincipal(grafoAux);
    printf("Imprimiu grafoAux???");
    getchar();
    imprimeListaAdjVertice(2);
    printf("por vertice 2");
    getchar();

    

    return 0;
}