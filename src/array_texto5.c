#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    

    char nome_completo[30];
    float nota1,nota2,nota3,nota4;
    float soma,divisão,resultado;
    
    printf("Digite o Seu nome\n");
    fgets(nome_completo,30,stdin);

    printf("Digite sua nota da apresrentação:\n");
    scanf("%f",&nota1);

    printf("Digite sua nota da trablho:\n");
    scanf("%f",&nota2);

    printf("Digite sua nota da prova:\n");
    scanf("%f",&nota3);

    printf("Digite sua nota da plataformas:\n");
    scanf("%f",&nota4);

    soma = nota1 + nota2 + nota3 +nota4;
    resultado = soma / 4;
    
    
    
    
    if( resultado >= 7 ){
        printf("Sua nota é %.2f azul, você passou!\n",resultado);
    }
    else if( resultado <= 4 ){
        printf("Sua nota é %.2f você esta reprovado!\n",resultado);
    }
    else {
        printf("Sua nota é %.2f, você esta de recuperação\n",resultado);
    }

    printf("\n");

    printf("Seu nome é %s e sua nota final é %.2f \n",nome_completo, resultado);

    return 0;
}
