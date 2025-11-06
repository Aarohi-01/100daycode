#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int min, max;

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}