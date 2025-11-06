#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];
    int i;
    int isValid = 1;

    printf("Enter a binary number: ");
    scanf("%64s", binary);

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            isValid = 0;
            break;
        }
    }

    if (isValid == 1) {
        printf("1's complement: %s\n", binary);
    } else {
        printf("Error: Not a valid binary number.\n");
    }

    return 0;
}