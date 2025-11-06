#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *file_ptr;
    int ch;

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    
    int inWord = 0;
    int lastChar = '\n'; 

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        charCount++;
        lastChar = ch;

        if (ch == '\n') {
            lineCount++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } 
        else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    
    if (charCount > 0 && lastChar != '\n') {
        lineCount++;
    }

    fclose(file_ptr);

    printf("File analysis for: %s\n", filename);
    printf("Total Characters: %d\n", charCount);
    printf("Total Words:      %d\n", wordCount);
    printf("Total Lines:      %d\n", lineCount);

    return 0;
}