#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastSeen[256];
    int i, len;
    int maxLength = 0;
    int start = 0;

    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        
        unsigned char ch = s[i];

        
        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }

        
        lastSeen[ch] = i;

        
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}