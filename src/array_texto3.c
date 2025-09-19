#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome[10];
    char sobrenome[10];
    printf("Digite o seu nome\n");
    scanf("%s",nome);

    printf("Digite o seu sobrenome\n");
    scanf("%s",sobrenome);

    printf("Olá, %s %s. Seja bem vindo\n",nome,sobrenome);

    return 0;
}