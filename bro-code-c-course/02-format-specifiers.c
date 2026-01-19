#include <stdio.h>

int main(){

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    // precision

    float price1 = 5.99;
    float price2 = 1.99;
    float price3 = -.99;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    // width precision flags

    printf("%+8.2f\n", price1);
    printf("%+8.2f\n", price2);
    printf("%+8.2f\n", price3);

    return 0;
}