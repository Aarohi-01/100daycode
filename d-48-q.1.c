#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    char str2[1000];
    char temp[2000]; 
    int len1, len2;
    int isRotation = 0; 

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
        isRotation = 0;
    } else if (len1 == 0) {
        isRotation = 1; 
    } else {
        
        strcpy(temp, str1);
        strcat(temp, str1);

        
        if (strstr(temp, str2) != NULL) {
            isRotation = 1;
        } else {
            isRotation = 0;
        }
    }

    if (isRotation == 1) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are NOT rotations of each other.\n");
    }

    return 0;
}