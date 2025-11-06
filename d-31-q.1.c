#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int found = 0;
    int index = -1;

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}