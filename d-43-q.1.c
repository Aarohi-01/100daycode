#include <stdio.h>
#include <string.h> // For strlen, though we can avoid it

int main() {
    char str[1000];
    int i, length = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string, excluding the newline from fgets
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    // Optional: Add a null terminator where the newline was,
    // if you want the string to be "clean" after
    if (str[length] == '\n') {
        str[length] = '\0';
    }


    // Reverse the string in place
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}