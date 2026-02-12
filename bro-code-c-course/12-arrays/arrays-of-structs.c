#include <stdio.h>

typedef struct{
    char name[25];
    int calories;
    int price;
}Food;

int main(){

    // array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups together related data

    Food food[] = {{"Lasagna", 800, 10}, 
                  {"Pizza", 1000, 12}, 
                  {"Ramen", 900, 11}};

    int number = sizeof(food) / sizeof(food[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", food[i].name, food[i].calories, food[i].price);
    }

    return 0;
}