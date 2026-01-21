#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            break; // break = Break out of a loop (STOP)
        }

        printf("%d\n", i);
    }

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue; // continue = Skip current cycle of a loop (SKIP)
        }

        printf("%d\n", i);
    }

    return 0;
}