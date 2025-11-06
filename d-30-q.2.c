#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive count: %d\n", positiveCount);
    printf("Negative count: %d\n", negativeCount);
    printf("Zero count: %d\n", zeroCount);

    return 0;
}