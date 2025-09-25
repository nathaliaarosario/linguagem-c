#include <stdio.h>
#include <stdlib.h>

void configuracao(char *nome, char *nome_cliente, char *email, char *ano, char *idade){
    FILE *arquivo;
    arquivo = fopen("files/cadastro_cliente.txt","a");
    fputs(nome_cliente,arquivo);

    arquivo = fopen(nome_cliente,"a");
    fputs(nome_cliente,arquivo);

    arquivo = fopen(email,"a");
    fputs(email,arquivo);

    
    fputs(ano,arquivo);
    fprintf(arquivo, "ano %s\n",ano)

    arquivo = fopen(idade,"a");
    fprintf(arquivo, "ano %s\n",ano)
   
    fclose(arquivo);
}

