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
    while(j < numNos){
        grafoPrincipal = inserirNo(grafoPrincipal, 1);
        i++;
    }
    printf("\nForam inseridos %d vertices no grafo", i);
    getchar();
    grafoAux = grafoAuxLA = grafoPrincipal;

    getchar();

    imprimeListaPrincipal(grafoAux);

    getchar();
    j = 0;
    while(j<3){
        inserirListaAdj(grafoAux->adj, grafoAux, 1, 2, (float)j+1.0);
        j++;
    }
    
   
    printf("No adjacente inserido\n");

    getchar();

    imprimeListaAdjVertAtual(grafoAux->adj);
    printf("teste enviando a lista adj");

    getchar();

   

    imprimeListaAdjVertice(3);
    printf("por vertice 3");

    getchar();


    imprimeListaPrincipal(grafoAux);
    printf("Imprimiu grafoAux???");
    getchar();
    imprimeListaAdjVertice(2);
    printf("por vertice 2");
    getchar();

    

    return 0;
}