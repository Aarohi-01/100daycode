#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
    } else {
        sum = (long long)n * (n + 1) / 2;
        printf("Sum of the first %d natural numbers = %lld\n", n, sum);
    }

    return 0;
}