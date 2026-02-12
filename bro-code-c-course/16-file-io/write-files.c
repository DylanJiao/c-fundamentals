#include <stdio.h>

int main(){

    // WRITE A FILE

    FILE *pFile = fopen("C:\\Users\\dylan\\Desktop\\output.txt", "w");

    char text[] = "Domain expansion!\nText File!!!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);

    return 0;
}