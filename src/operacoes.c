//  Incluir a biblioteca padrão de entrada 
//  e saída de dados (stdio.h)
#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, subtrair, multiplicar, dividir, resto;

    printf("Digite o primeiro número inteiro e tecle enter:\n");
    scanf("%d",&numero1);

    printf("Digite o primeiro número inteiro e tecle enter:\n");
    scanf("%d",&numero2);
    
    soma = numero1 + numero2;
    subtrair = numero1 - numero2;
    multiplicar = numero1 * numero2;
    dividir = numero1 / numero2;
    resto = numero1 % numero2;
    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultado da divisão  é %d\n",dividir);
    printf("O resultado do resto é %d\n",resto);

    return 0;

}