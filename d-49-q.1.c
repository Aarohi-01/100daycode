#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    if (len > 0) {
        
        printf("%c", toupper(name[0]));

        
        for (i = 1; i < len; i++) {
            
            if (name[i] == ' ') {
                
                if (i + 1 < len && name[i+1] != ' ') {
                    printf("%c", toupper(name[i + 1]));
                }
            }
        }
    }

    printf("\n");

    return 0;
}