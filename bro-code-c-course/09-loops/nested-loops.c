#include <stdio.h>

int main() {

    for(int i = 1; i < 10; i++){ // repeating the loop 3x via copy + paste (not recommended)
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 1; i < 10; i++){  
        printf("%d ", i);
    }
    printf("\n");
    
    for(int i = 1; i < 4; i++){ // repeating the loop 3x via nested loops (recommended, less code)
        for(int j = 1; j < 10; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    for(int i = 1; i <= 10; i++){ // example: using nested loops to display a multiplication table
        for(int j = 1; j <= 10; j++){
            printf("%3d ", i * j);
        }
        printf("\n");
    }
    
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows: "); // example: using nested loops to display a 2D rectangle
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the symbol: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++){ 
        for(int i = 0; i < columns; i++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}