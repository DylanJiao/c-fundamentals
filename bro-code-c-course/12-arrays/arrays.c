#include <stdio.h>

int main() {

    // array = A fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {1, 2, 3, 4, 5};
    char grades[] = {'A', 'B', 'C'};
    char name[] = "Dylan Jiao";

    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);

    printf("%c\n", grades[0]);

    printf("%c\n", name[0]);

    for(int i = 0; i < 3; i++){
        printf("%c ", grades[i]);
    }
    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%c ", name[i]);
    }
    printf("\n");

    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0]));

    int size = sizeof(numbers) / sizeof(numbers[0]); 

    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}