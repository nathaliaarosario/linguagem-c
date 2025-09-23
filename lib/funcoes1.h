// arquivos .h eles ñ tem main, pq eles não executam 
#include <stdio.h>


void exibir(int valor){
    printf("%d\n",valor);
    printf("%p\n",&valor);
}
void exibir2(int *valor){
    printf("\n-------------- Exibir2 -------------\n");
    // usar o ponteiro nessa situação pega o conteudo do endereço de memória
    printf("%d\n",*valor);
    // já esse, pega o endereço de memória
    printf("%p\n",valor);
}
