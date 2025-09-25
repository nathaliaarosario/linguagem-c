#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    char nome_produto[30];
    char tipo_produto[20];
    int quantidade;
    float preco;
};

int main(){
    system("clear");

    struct produto prod;
    char nome[30];
    char tipo[20];
    int qtd;
    float valor;

    printf("\n------------------- Cadastro de  produto -------------------\n");

    printf("Digite o nome do produto\n");
    fgets(nome,sizeof(nome),stdin),
    strcpy(prod.nome_produto,nome);

    printf("Digite o tipo do produto\n");
    fgets(tipo,sizeof(tipo),stdin);
    strcpy(prod.tipo_produto,tipo);

    printf("Digite a quantidade do produto\n");
    scanf("%d",&qtd);
    prod.quantidade = qtd;

    printf("Digite o preço do produto\n");
    scanf("%f",&valor);
    prod.preco = valor;

    printf("O produto cadastrado foi: %s\n",prod.nome_produto);
    printf("Este produto é do tipo: %s\n",prod.tipo_produto);
    printf("A quantidade em estoque é: %d\n",prod.quantidade);
    printf("O preço unitário é: %.2f\n",prod.preco);

    return 0;
}
