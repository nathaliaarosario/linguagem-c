#include <stdio.h>
void salvar_cliente_em_arquivo(char *nome, char *email, int ano_nascimento, int idade){

    // Declara um ponteiro de arquivo
    FILE *arquivo;

    // Abre o arquivo "clientes.txt" no modo "a" (append - adicionar ao final)
    // Se o arquivo não existir, ele será criado.
    arquivo = fopen("files/cadastro-clientes.txt", "a");

    // Escreve os dados do cliente no arquivo, de forma organizada
    fprintf(arquivo, "-----------------------------------\n");
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Email: %s\n", email);
    fprintf(arquivo, "Ano de Nascimento: %d\n", ano_nascimento);
    fprintf(arquivo, "Idade (calculada): %d anos\n", idade);
    fprintf(arquivo, "-----------------------------------\n\n");

    // Fecha o arquivo para salvar as alterações
    fclose(arquivo);

    
}


void salvar_cliente_em_arquivo_puts(char *nome, char *email, int ano_nascimento, int idade){

    // Declara um ponteiro de arquivo
    FILE *arquivo;

    // Declara um buffer (array de caracteres) para construir cada linha
    // Um tamanho de 256 caracteres é geralmente seguro para linhas de texto simples.
    // será usada para converter os valores de inteiros para char
    char converter[256];


    // Abre o arquivo "clientes.txt" no modo "a" (append - adicionar ao final)
    // Se o arquivo não existir, ele será criado.
    arquivo = fopen("files/cadastro-clientes.txt", "a");

    snprintf(converter, sizeof(converter), "Nome: %s\n", nome);
    fputs(converter, arquivo);

    snprintf(converter, sizeof(converter), "Email: %s\n", email);
    fputs(converter, arquivo);

    snprintf(converter,sizeof(converter), "Ano nascimento: %d\n",ano_nascimento);
    fputs(converter,arquivo);

    snprintf(converter,sizeof(converter), "Idade: %d\n",idade);
    fputs(converter,arquivo);

   
    // Fecha o arquivo para salvar as alterações
    fclose(arquivo);

    
}