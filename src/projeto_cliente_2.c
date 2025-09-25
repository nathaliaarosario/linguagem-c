#include <stdio.h>
#include <time.h>   // Para obter o ano atual
#include <string.h> // Para manipulação de strings

// Inclui o nosso arquivo de cabeçalho que contém a declaração da função de salvar
#include "../lib/cadastro_clietne.h"



int main() {
    // Variáveis para armazenar os dados do cliente
    char nome[100];
    char email[100];
    int ano_nascimento;
    int idade;

    // --- Coleta de Dados do Usuário ---
    printf("--- Cadastro de Novo Cliente ---\n");

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere '\n' que o fgets captura

    printf("Digite o email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0; // Remove o caractere '\n'

    printf("Digite o ano de nascimento (ex: 1995): ");
    scanf("%d", &ano_nascimento);
    getchar();

    // --- Cálculo da Idade ---
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano_atual = tm.tm_year + 1900; // O ano é contado a partir de 1900
    idade = ano_atual - ano_nascimento;

    // --- Salvando os dados ---
    // Chama a função que está definida em operacoes_arquivo.c
    salvar_cliente_em_arquivo(nome, email, ano_nascimento, idade);
        printf("\nCliente '%s' cadastrado com sucesso no arquivo clientes.txt!\n", nome);

    return 0;
}
