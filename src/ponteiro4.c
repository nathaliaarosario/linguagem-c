#include <stdio.h>
#include <stdlib.h>


int main(){
    system("clear");
    // criar um arquivo.
    FILE *arquivo;

    // texto.txt vai ser o nome do arquivo e "a" de criar coisas dentro do arquivo
    arquivo = fopen("texto.txt","a");
    // para escrever dentro do arquivo
    fprintf(arquivo,"sexta-feira");
    fclose(arquivo);
    return 0;

}