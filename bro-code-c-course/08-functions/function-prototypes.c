#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){

    // function prototype = Provides the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("Dylan", 24);

    if (ageCheck(14)){
        printf("You are 16 or older.");
    }
    else{
        printf("You are younger than 16 years old.");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old.\n", age);
}

bool ageCheck(int age){
    if(age >= 16){
        return true;
    }
    else{
        return false;
    }
}