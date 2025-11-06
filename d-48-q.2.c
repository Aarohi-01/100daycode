#include <stdio.h>
#include <string.h>

void reverseSubString(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int i, len;
    int wordStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {
        
        if (str[i] == ' ' || str[i] == '\0') {
            
            int wordEnd = i - 1;
            
            reverseSubString(str, wordStart, wordEnd);
            
            wordStart = i + 1;
        }
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}