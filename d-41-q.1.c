#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;
    int i;

    // Read the string from the user
    // scanf("%s", str); // This would stop at the first whitespace

    // Use fgets to read the entire line, including spaces
    // Note: fgets includes the newline character if it fits
    fgets(str, sizeof(str), stdin);

    // Iterate through the string until the null terminator is found
    for (i = 0; str[i] != '\0'; i++) {
        // If the character is the newline character added by fgets, don't count it
        if (str[i] == '\n') {
            break; // Stop counting as we reached the end of the user input
        }
        count++;
    }

    // Alternative using a while loop:
    /*
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    */

    printf("%d\n", count);

    return 0;
}