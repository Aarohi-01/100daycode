#include <stdio.h>

int main() {
    int n, i, key, pos;
    int arr[101];

    scanf("%d", &n);

    if (n < 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
    } else {
        int idx = pos - 1;

        for (i = n; i > idx; i--) {
            arr[i] = arr[i - 1];
        }

        arr[idx] = key;
        n++;

        printf("Array after insertion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}