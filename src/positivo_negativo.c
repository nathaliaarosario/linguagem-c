#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int v;
    printf("Digite um número e tecle enter:\n");
    scanf("%d",&v);
    if ( v > 0)
    {
        printf("O número digitado é positivo\n");
    }
    else if ( v < 0 )
    {
        printf("O número digitado é negativo\n");
    }    
    else{
        printf("O número digitado é zero(0)\n");
    }
    return 0;
}