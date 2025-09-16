#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int valores[7] = {10,56,30,13,1,47,59};
    int numeros[5] = {3,10,4,77,47};

    int igual = valores[0];
    int mesmo = numeros[0];

    for(int i = 1; i <= 6; i++){
        if(valores[i] = igual){
            igual = valores[i];
            
        }
        for(int i = 1; i <= 4; i++){
            mesmo = numeros[i];
        }
    }
    printf("os numeros iguais são %d e %d\n",igual,mesmo);
    return 0;
}