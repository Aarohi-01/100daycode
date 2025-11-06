#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All sub-strings are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}