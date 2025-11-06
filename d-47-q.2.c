#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longestWord[100];
    int i, len;
    int currentWordLength = 0;
    int currentWordStart = 0;
    int maxLength = 0;
    int maxWordStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {
        
        if (str[i] != ' ' && str[i] != '\0') {
            if (currentWordLength == 0) {
                currentWordStart = i;
            }
            currentWordLength++;
        } else {
            
            if (currentWordLength > maxLength) {
                maxLength = currentWordLength;
                maxWordStart = currentWordStart;
            }
            currentWordLength = 0;
        }
    }

    
    if (maxLength == 0 && len > 0) {
        maxLength = len;
        maxWordStart = 0;
    }

    if (maxLength > 0) {
        
        for (i = 0; i < maxLength; i++) {
            longestWord[i] = str[maxWordStart + i];
        }
        longestWord[maxLength] = '\0';