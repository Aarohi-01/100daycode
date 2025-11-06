#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i, len;
    int lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    if (len == 0) {
        printf("No name entered.\n");
        return 0;
    }

    
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    
    if (lastSpaceIndex == -1) {
        name[0] = toupper(name[0]);
        printf("%s\n", name);
    } 
    
    else {
        
        printf("%c. ", toupper(name[0]));

        
        for (i = 1; i < lastSpaceIndex; i++) {
            if (name[i] == ' ' && i + 1 < lastSpaceIndex && name[i+1] != ' ') {
                printf("%c. ", toupper(name[i + 1]));
            }
        }

        
        name[lastSpaceIndex + 1] = toupper(name[lastSpaceIndex + 1]);
        
        
        for (i = lastSpaceIndex + 1; i < len; i++) {
            printf("%c", name[i]);
        }
        printf("\n");
    }

    return 0;
}