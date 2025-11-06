#include <stdio.h>

int main() {
    char filename[100];
    char textToAppend[1000];
    FILE *file_ptr;

    printf("Enter the name of the file to append to: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "a");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("File opened in append mode.\n");
    printf("Enter the text to append: ");

    while (getchar() != '\n');
    
    fgets(textToAppend, sizeof(textToAppend), stdin);

    fputs(textToAppend, file_ptr);

    fclose(file_ptr);

    printf("Text successfully appended to '%s'.\n", filename);

    return 0;
}