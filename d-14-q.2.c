#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d to multiply.\n", n);
    } else {
        for (i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product: %lld\n", product);
    }

    return 0;
}