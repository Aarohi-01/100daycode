#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, length = 0;
    int isPalindrome = 1; // 1 for true, 0 for false

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length, excluding the newline from fgets
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    // Check if the string is a palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}