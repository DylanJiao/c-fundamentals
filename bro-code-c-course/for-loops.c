#include <stdio.h>
#include <windows.h> //Windows
#include <unistd.h> //Linux/Mac

int main(){

    // for loop = Repeat some code a limited # of times
    //            for(Initialization; Condition; Update)

    for(int i = 1; i <= 50; i+=3){ // addition
        printf("%d\n", i);
    }

    for(int i = 1; i >=-50; i-=3){ // substraction
        printf("%d\n", i);
    }

    for(int i = 10; i >= 0; i--){ // happy new year example
        printf("%d\n", i);
    }

    printf("Happy new year!\n");

    for(int i = 10; i >=0; i--){ // sleep function example
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("Happy new year!\n");

    return 0;
}