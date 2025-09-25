#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct estudante{
    char nome[50];
    int idade;
    char serie[10];
};


int main(){
    system("clear");
    // Vamos fazer uma representação da estrutura 
    // estudante, que é algo parecido com declaração de 
    // variável, para ter acesso aos dados do estudante
    struct estudante estu;
    estu.idade = 25;
    strcpy(estu.nome,"Marcia");
    strcpy(estu.serie, "1ºTM");

    printf("O estudante tem %d anos\n",estu.idade);
    printf("O nome do estudante é %s\n",estu.nome);
    printf("A serie do estudante é %s anos\n",estu.serie);

    return 0;
}