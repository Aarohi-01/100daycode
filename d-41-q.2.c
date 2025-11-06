#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    
    // Read the string, including spaces
    fgets(str, sizeof(str), stdin);

    printf("The characters are:\n");

    // Iterate through the string until the null terminator is found
    for (i = 0; str[i] != '\0'; i++) {
        
        // Don't print the newline character if it was read by fgets
        if (str[i] == '\n') {
            break; 
        }
        
        // Print the character followed by a new line
        printf("%c\n", str[i]);
    }

    return 0;
}