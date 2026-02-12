#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // NUMBER GUESSING GAME

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do{
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer){
            printf("Guess is too high, go lower!\n");
        }
        else if(guess < answer){
            printf("Guess is too low, go higher!\n");
        }
        else{
            printf("Correct!");
        }

    }while(guess != answer);

    printf("The answer is %d.\n", answer);
    printf("It took you %d tries.", tries);

    return 0; 
}