#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int idade = 18;
    int *p_idade = &idade;
    printf("A idade é %d\n",idade);
    printf("End. memória %p\n",p_idade);
    printf("O valor que está no endereço %p é %d\n",p_idade, *p_idade);
    *p_idade = 40;
    printf("O valor que está no endereço %p é %d\n",p_idade, *p_idade);
    return 0;
}