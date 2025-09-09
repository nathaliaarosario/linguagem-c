#include <stdio.h>
//  Ultilizaremos a biblioteca stdiob que guarda
//  os comandos de limpar a tela e pause
#include <stdlib.h>

int main(){
    // comando para limpar a tela em Linux
    system("clear");
    int n;
    printf("Digit um número interio e tecle enter\n");
    scanf("%d",&n);
    // Se o valor digitado pelo usuário dividido por 2 
    // e restar zero(0), então este valor é par
    if( n % 2 == 0){
        printf("O numero %d que vc digitou é par\n",n);
    }
    return 0;
}