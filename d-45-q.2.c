#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if it's a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase
            str[i] = str[i] - 32;
        }
        // Check if it's an uppercase letter
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase
            str[i] = str[i] + 32;
        }
    }

    printf("Toggled case string: %s", str);

    return 0;
}