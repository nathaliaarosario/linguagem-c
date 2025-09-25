#include <stdio.h>
#include <stdlib.h>
#include "../lib/guardar_informacoe.h"

int main(){
    system("clear");
    char nome_cliente[100];
    char email[100];
    int ano;
    int ano_atual = 2025;
    int idade;


    printf("Digite o seu primeiro nome:\n");
    fgets(nome_cliente,30,stdin);

    getchar();

    printf("Digite o seu email:\n");
    fgets(email,100,stdin);

    printf("Digite a data em que você nasceu:\n");
    scanf("%d",&ano);


    idade = ano_atual - ano;

    char idade1 = (char)idade;
    char ano1 = (char)ano;
   
    printf("Seu nome %s, sua idade é %d",nome_cliente,idade1);

    configuracao("files/cadastro_cliente.txt",nome_cliente,email,&ano1,&idade1);
    printf("Arquivo criado...\n");
    return 0;


}