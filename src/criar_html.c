#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    FILE *pagina;
    pagina = fopen("files/index.html","a");
    fprintf(pagina,"<html><body><h1>Minha Pagina</h1></body></html>");
    printf("pagina criada...\n");
    fclose(pagina);
    return 0;

}