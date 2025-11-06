#include <stdio.h>
#include <string.h> // For strlen
#include <ctype.h>  // For tolower

int main() {
    char str[1000];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline from fgets, if it exists
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    j = 0; // Index for the modified string (writer)

    for (i = 0; str[i] != '\0'; i++) { // 'i' is the reader
        
        char ch = tolower(str[i]);

        // Check if the character is NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            
            // If it's not a vowel, copy it to the writer's position
            str[j] = str[i];
            j++; // Move the writer index
        }
        // If it is a vowel, we simply don't copy it and the reader 'i' moves on
    }

    // Add the null terminator to the end of the new, shorter string
    str[j] = '\0';

    printf("String without vowels: %s\n", str);

    return 0;
}