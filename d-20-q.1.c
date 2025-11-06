#include <stdio.h>

int main() {
    int n, originalN;
    long long product = 1;
    int remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        product = 1; 
    }

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
        }
        n /= 10;
    }

    printf("Product of odd digits: %lld\n", product);

    return 0;
}