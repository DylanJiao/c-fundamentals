#include <stdio.h>
#include <stdbool.h>

int main(){
   //Variable practice with types: int, float, char, char[], bool//
 
   int age = 24;
   float size = 9.5;
   char grade = 'A';
   char school[] = "Hogwarts University";
   bool isAwake = true;

   printf("I am %d years old.\n", age);
   printf("My shoe size is %.1f.\n", size);
   printf("I got an %c on the test!\n", grade);
   printf("I attend %s.\n", school);  

   if(isAwake){
      printf("He is awake.");
   }
   else{
      printf("He is not awake.");
   }

   return 0;
}