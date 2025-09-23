#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    FILE *novo;
    novo = fopen("files/cadastro.txt","a");
    // fprintf quando vc mesmo escreve no arquivo
    fprintf(novo,"Olá, hoje é terça-feira.");
    // fputs vc escreve indiretamente no aruivo, quando um usuario vai escrever no aruivo, para isso usamos uma variavel
    printf("Arquivo criado!\n");
    fclose(novo);
    return 0;
}