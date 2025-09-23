#include <stdio.h>
#include <stdlib.h>
#include "funcoes1.h"

int main(){
    system("clear");
    int quantidade = 300;
    int *p_quantidade = &quantidade;
    exibir(quantidade);
    printf("O endereço de quantidade é %p\n",p_quantidade);
    exibir2(&quantidade);
    return 0;
}