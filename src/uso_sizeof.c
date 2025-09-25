#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int idade = 18;
    float preço = 54.90;
    char nome[100] = "Roberto Oliveira";
    char nome2[] = {"Roberto Oliveira"};
    _Bool trabalho = true;

    printf("O tamanho em bytes do tipo int é %d\n",sizeof(int));
    printf("O tamanho em bytes do tipo float é %d\n",sizeof(float));
    printf("O tamanho em bytes do tipo char é %d\n",sizeof(char));
    printf("O tamanho em bytes do tipo _Bool é %d\n",sizeof(_Bool));

    printf("\n-----------------------------------------\n ");

    printf("Otamanho em bytes da variável idade é %d\n",sizeof(idade));
    printf("Otamanho em bytes da variável preço é %d\n",sizeof(preço));
    printf("Otamanho em bytes da variável nome é %d\n",sizeof(nome));
    printf("Otamanho em bytes da variável nome2 é %d\n",sizeof(nome2));
    printf("Otamanho em bytes da variável trabalho é %d\n",sizeof(trabalho));

    return 0;

}
