#include <stdio.h>
#include <ctype.h>

int main() {

    // QUIZ GAME

    char questions[][100] = {"What is the fastest animal?",
                             "What is the slowest animal?",
                             "What is the biggest animal?",
                             "What is the smallest animal?"};

    char options[][100] = {"A. Cheetah\nB. Sailfish\nC. Peregrine falcon\nD. Golden eagle",
                           "A. Garden snail\nB. Sea anemone\nC. Giant tortoise\nD. Koala",
                           "A. Blue whale\nB. Whale shark\nC. Southern white whale\nD. Sperm whale",
                           "A. Bumblebee bat\nB. Pygmy jerboa\nC. Mouse lemur\nD. Etruscan shrew"};

    char answerKey[] = {'C', 'B', 'A', 'D'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("Correct!\n");
            score++;
        }
        else{
            printf("Wrong!\n");
        }
    }

    printf("Your score is %d out of %d points\n", score, questionCount);

    return 0;
}