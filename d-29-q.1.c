#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    long long sum = 0;

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %lld\n", sum);

    return 0;
}