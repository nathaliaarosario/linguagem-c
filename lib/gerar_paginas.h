#include <stdio.h>
#include <stdlib.h>

// criar uma função
void criar_index(char *nome){
    FILE *pagina;
    pagina = fopen(nome,"a");
    fprintf(pagina,"<html><body><h1>Bem Vindo</h1></body></html>");
    fclose(pagina);
}


void novo_arquivo(char *nome, char *conteudo){
    FILE *arquivo;
    arquivo = fopen(nome,"a");
    fputs(conteudo,arquivo);
    fclose(arquivo);
}












