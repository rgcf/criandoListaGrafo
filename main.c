#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main
{   
    unsigned int numNos, numAdj, j, i = 1;
	system("clear");
	printf("Insira o numero total de nos existentes:\n");
	scanf("%d", &numNos);
    printf("Criando a lista com %d nos...", numNos);
    
    noListaPrincipal *grafoPrincipal, *grafoAux; //Cria os ponteiros para lista principal
	noAdj  *listaAdj; //cria ponteiros para a lista adjacente

    grafoPrincipal = criarListaGrafo();
    

    return 0;
}