#include <stdio.h>

int main() {

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    int number = 0;

    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }while(number <= 0);

    return 0;
}