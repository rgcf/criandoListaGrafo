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
	noAdj  *listaAdj; //cria ponteiros para a lista adjacente

    grafoPrincipal = criarListaGrafo();
    
    inserirNo(grafoPrincipal, 1);
    printf("No inserido");
    inserirNo(grafoPrincipal, 2);
    printf("No inserido");
    inserirNo(grafoPrincipal, 3);
    printf("No inserido");
    getchar();

    grafoAux = grafoAuxLA = grafoPrincipal;

    grafoAuxLA->adj = inserirListaAdj(grafoAux->adj, grafoAux, 1, 2, 1.0);

    getchar();


    return 0;
}