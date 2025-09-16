#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int nota1 = 10;
    int nota2 = 5;
    int nota3 = 7;

    // arrey (conjunto de vcariaveis)
    int notas[3] = {10,5,7};

    printf(" A nota é %d - posição em memória %p\n",nota1,&nota1);
    printf(" A nota é %d - posição em memória %p\n",nota2,&nota2);
    printf(" A nota é %d - posição em memória %p\n",nota3,&nota3);
    printf("\n-----------------------------------------------\n");

    // possição [0] porque é o primeiro elemento do conjunto (arrey), o ultimo é igual a quatidade - 1
    printf(" A primeira nota é %d - posição em memória %p\n",notas[0],&notas[0]);

    // possição [1] porque é a sequência do elemento do conjunto (arrey)
    printf(" A primeira nota é %d - posição em memória %p\n",notas[1],&notas[1]);
    
    // possição [2] porque é o o ultimo conjunto (quatidade - 1)
    printf(" A primeira nota é %d - posição em memória %p\n",notas[2],&notas[2]);

    return 0;
}