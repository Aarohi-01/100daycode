#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int evenCount = 0;
    int oddCount = 0;

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even count: %d\n", evenCount);
    printf("Odd count: %d\n", oddCount);

    return 0;
}