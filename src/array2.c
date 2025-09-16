#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    // array com uma linha só é chamado de vetores (quando tem colunas e linhas é chamado de matriz)
    int valores[7] = {10,56,30,10,1,47,59};
    int menor = valores[0];
    // (i) vai começar com 1 porque o menor numero ja vai estar começando, então vai ciompara com o proximo, por isso começa com 1
    for(int i = 1; i <= 6; i++){
        if(valores[i] < menor){
            menor = valores[i];
        }
    }
    printf("O menor valor é %d\n",menor);
    return 0;
}
