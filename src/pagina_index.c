#include <stdio.h>
#include <stdlib.h>
// ../linb sair da pasta atual (src) e ir para a pasta lib
#include "../lib/gerar_paginas.h"

int main(){
    system("clear");
    criar_index("index.html");
    printf("Arquivo criado\n");
    return 0;


}