#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the ASCII difference
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}