#include <stdio.h>

int main() {
    int n, i, key;
    int arr[101];
    int pos = 0;

    scanf("%d", &n);

    if (n < 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    while (pos < n && arr[pos] < key) {
        pos++;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}