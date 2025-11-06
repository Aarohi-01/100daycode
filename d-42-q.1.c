#include <stdio.h>
#include <ctype.h> // For isalpha() and tolower()

int main() {
    char str[1000];
    int i;
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Stop if we hit the newline character from fgets
        if (ch == '\n') {
            break;
        }

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Convert to lowercase to simplify vowel check
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}