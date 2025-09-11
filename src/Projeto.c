#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int i=1;
    int f=1;


    printf("Digite um ano inicial:\n");
    scanf("%d",&i);

    printf("Digite o ano final:\n");
    scanf("%d",&f);

    while ( i <= f ){
        if ( i % 4 ==0 )
        printf("Os %d são bissextos\n",i);
        i++;
    }
 return 0;

}
