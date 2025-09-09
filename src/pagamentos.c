#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    float preco, resultado;
    char forma_pg;

    printf("Digite o valor a ser pago e tecle:\n");
    scanf("%f",&preco);

    //  Limpao buffer do teclado antes de ler o caracter
    //  para a execução anterior e segue  para a proxima etapa
    getchar(); // importante para evitar que o '\n' da 
    // leitura anterior seja capturado

    printf("Digite a forma de pagamento, sendo:\n");
    printf("c->Credito\nd->débito\nD->Dinheiro\np->pix\n");
    scanf("%c",&forma_pg);

    if( forma_pg == 'c' ){
        resultado = preco * (0.05 + 1);
        //  resultado = preco * 0.05 + preco;
        printf("O valor a ser pago no crédido é %.2f\n",resultado);
    }
    else if ( forma_pg == 'd') {
        printf("O valor a ser pago no débito é %.2f\n",preco);
    }
    else if ( forma_pg == 'D') {
        resultado = preco * 0.98;
        printf("O valor a ser pago no dinheiro é %.2f\n",resultado);
    }
    else if  ( forma_pg == 'p') {
        resultado = preco * 0.96;
        printf("O valor a ser pago no dinheiro é %.2f\n",resultado);
    } 
    else {
        printf("Esta forma de pagamento NÃO EXISTE\n");
    }
    return 0;
}