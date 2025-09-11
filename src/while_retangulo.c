#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int lin = 0, col = 0;

     while( lin <= 10 ){
        col = 0;
        while ( col <= lin ){
            printf("@ ");
            col++;
        }
        printf("\n");
        lin++;
    }
    return 0;

}
    
