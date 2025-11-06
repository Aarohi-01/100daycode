#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, len;
    int capitalizeNext = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            if (capitalizeNext == 1) {
                str[i] = toupper(ch);
                capitalizeNext = 0;
            } else {
                str[i] = tolower(ch);
            }
        } else if (ch == '.' || ch == '!' || ch == '?') {
            capitalizeNext = 1;
        } else if (isspace(ch)) {
            
        } else {
            
            capitalizeNext = 0;
        }
    }

    printf("Sentence case string: %s\n", str);

    return 0;
}