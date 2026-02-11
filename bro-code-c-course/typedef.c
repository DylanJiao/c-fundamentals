#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main () {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

    Number x = 4;
    Number y = 6;
    Number z = x + y;

    printf("%d\n", z);

    String name = "Dylan Jiao";

    printf("%s\n", name);

    Initials User1 = "AB";
    Initials User2 = "CD";
    Initials User3 = "EF";
    Initials User4 = "GH";

    printf("%s\n", User1);
    printf("%s\n", User2);
    printf("%s\n", User3);
    printf("%s\n", User4);

    return 0;
}