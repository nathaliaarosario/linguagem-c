#include <stdio.h>
#include <stdlib.h>
 //laço while (enquanto), para repetição
int main(){
    system("clear");
    //inicio da variavel
    int i = 1;   
     //condiçõa para execução/repetição (se for verdadeira ela se repete, se for falso ela não repete)
    while ( i <= 10 ){ 
        //corpo de repetição
        printf("%d\n",i); 
        //ecrementação
        i++; 
    }
    return 0;
}