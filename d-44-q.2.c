#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string until the null terminator
    for (i = 0; str[i] != '\0'; i++) {
        
        // Check if the current character is a space
        if (str[i] == ' ') {
            // Replace the space with a hyphen
            str[i] = '-';
        }
    }

    printf("Modified string: %s", str);

    return 0;
}