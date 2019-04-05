#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    unsigned int numNos, numAdj, j = 0, i = 0;
    system("clear");
    printf("Insira o numero total de vertices existentes:\n");
    scanf("%d", &numNos);
    printf("Criando a lista com %d vertices...", numNos);

    noListaPrincipal *grafoPrincipal, *grafoAux; //Cria os ponteiros para lista principal
    noAdj *listaAdj;                             //cria ponteiros para a lista adjacente

    grafoPrincipal = criarListaGrafo();
    grafoPrincipal -> numLigacoes = 0;

    while (j <= numNos)
    {
        grafoPrincipal = inserirNo(grafoPrincipal, j);
        printf("\nForam inseridos %d vertices no grafo", j);
        j++;
    }

    getchar();
    grafoAux = grafoAuxLA = grafoPrincipal;

    getchar();

    imprimeListaPrincipal(grafoAux);
    getchar();

    i = 0;
    srand(numNos);
    while (i < numNos)
    {
        j = 0;
        while (j < 3)
        {
            grafoAux->adj = inserirListaAdj(grafoAuxLA, i, (1 + rand()) % numNos, (float)(j + numNos * 2));
            printf("No adjacente inserido %d %d %f\n", grafoAux->noAtual, grafoAux->adj->noAdjacente, grafoAux->adj->pesoEntreOsNos);
            getchar();
            j++;
        }
        printf("inseridas listas do vertice");
        getchar();
        grafoAux = grafoAux->proxNo;
        i++;
    }

    getchar();

    return 0;
}