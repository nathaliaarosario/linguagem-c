#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int valores[5] = {10,56,30,10,1};
    int rs = 0;
    // (int i = 0; - pois é a primeira posição do conjunto) (i <= 4 - pois é a ultima posição do conjunto) 
    for ( int i = 0; i <= 4; i++){
        rs += valores[i];
    }
    printf("O resultad da soma é %d\n",rs);
    return 0;
}