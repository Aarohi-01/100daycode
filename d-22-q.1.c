#include <stdio.h>

int main() {
    int n, originalN;
    int sum = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    if (n < 0) {
        n = 0;
    }

    if (n == 0) {
        sum = 0;
    }

    while (n > 0) {
        remainder = n % 10;
        
        int factorial = 1;
        int i;
        for (i = 1; i <= remainder; ++i) {
            factorial *= i;
        }
        
        sum += factorial;
        n /= 10;
    }

    if (sum == originalN && originalN > 0) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}