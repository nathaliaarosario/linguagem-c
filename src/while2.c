#include <stdio.h>
#include <stdlib.h>

// Estrutura de repetição
int main(){
    int v = 1;
    // Condição de repetição
    while( v <= 200 ){
        if( v % 6 == 0){
            printf("O número %d é multiplo de 6\n",v);
        }
        v++;
    }
    return 0;

}