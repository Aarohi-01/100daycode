#include <stdio.h>

int main() {
    char str[1000];
    char target;
    int i;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &target);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", target, count);

    return 0;
}