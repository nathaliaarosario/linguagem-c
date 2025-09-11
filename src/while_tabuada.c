#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int vu,i=1,rs;
    printf("Digite um número para fazer a atabuada:\n");
    scanf("%d",&vu);
    while( i <= 10 ){
        rs = vu * i;
        printf("%d x %d = %d\n",vu,i,rs);
        i++;
    }
    return 0;
}