#include <stdio.h>
#include <ctype.h> // For isdigit() and isalpha()

int main() {
    char str[1000];
    int i;
    int spaces = 0;
    int digits = 0;
    int special = 0;
    int alphabets = 0; // Not required by prompt, but useful for logic

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Stop if we hit the newline character from fgets
        if (ch == '\n') {
            break;
        }

        if (ch == ' ') {
            spaces++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isalpha(ch)) {
            alphabets++; // Just to categorize it
        }
        else {
            // If it's not a space, digit, alphabet, or newline,
            // it's a special character.
            special++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);
    // printf("Number of alphabets: %d\n", alphabets); // Uncomment if needed

    return 0;
}