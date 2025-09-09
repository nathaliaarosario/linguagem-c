#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digite um número inteiro e tecle enter\n");
    scanf("%d", &n);
    if( n % 2 == 0){
        printf("O número %d que você digitou é par\n",n);
    }
    else{
        printf("O número %d que vc digitou é impar\n",n);
    }
    return 0;
}