#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
    } else {
        sum = (long long)n * n;
        printf("Sum of the first %d odd numbers = %lld\n", n, sum);
    }

    return 0;
}
