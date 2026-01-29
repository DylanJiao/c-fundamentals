#include <stdio.h>
#include <string.h>

int main() {

    // Array of Strings

    char fruits[][10] = {"apple", "banana", "cocount", "lemon", "mango"};

    for(int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++){
        printf("%s\n", fruits[i]);
    }

    // exercise: replacing characters in strings

    char fruit[][10] = {"apple", 
                         "banana", 
                         "coconut"};

    fruit[0][0] = 'e';
    fruit[0][4] = 'a';

    fruit[1][0] = 'a';
    fruit[1][5] = 'b';

    fruit[2][0] = 't';
    fruit[2][6] = 'c';

    for(int i = 0; i < 3; i++){
        printf("%s\n", fruit[i]);
    }

    // EXERCISE

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    printf("Enter a name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    printf("Enter a name: ");
    fgets(names[1], sizeof(names[1]), stdin);                                                                                                                                                                                                                                                                                                                                                                                                 
    names[1][strlen(names[1]) - 1] = '\0';

    printf("Enter a name: ");
    fgets(names[2], sizeof(names[2]), stdin);
    names[2][strlen(names[2]) - 1] = '\0';

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    // Condensed version (recommended)

    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}