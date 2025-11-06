#include <stdio.h>

int main() {
    char str[1000];
    int seen[26] = {0}; 
    int i;
    char firstRepeating = '\0'; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a'; 

            if (seen[index] == 1) {
                firstRepeating = ch;
                break; 
            } else {
                seen[index] = 1;
            }
        }
    }

    if (firstRepeating != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}