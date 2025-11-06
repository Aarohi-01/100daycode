#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    char str2[1000];
    
    int charCount[256] = {0}; 
    
    int i;
    int len1, len2;
    int isAnagram = 1; 

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--; 
    }
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    if (len1 != len2) {
        isAnagram = 0;
    } else {
        for (i = 0; i < len1; i++) {
            charCount[(unsigned char)str1[i]]++;
        }

        for (i = 0; i < len2; i++) {
            charCount[(unsigned char)str2[i]]--;
        }

        for (i = 0; i < 256; i++) {
            if (charCount[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}