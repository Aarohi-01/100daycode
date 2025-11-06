#include <stdio.h>

int main() {
    int n;
    int i;
    long long expectedSum;
    long long actualSum = 0;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d distinct numbers from 0 to %d (one is missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = (long long)n * (n + 1) / 2;

    long long missingNumber = expectedSum - actualSum;

    printf("The missing number is: %lld\n", missingNumber);

    return 0;
}