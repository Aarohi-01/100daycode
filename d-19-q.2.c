#include <stdio.h>

int main() {
    int n, originalN;
    int sum = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    if (n < 0) {
        n = -n;
    }
    
    if (n == 0) {
        sum = 0;
    } else {
        while (n != 0) {
            remainder = n % 10;
            sum = sum + remainder;
            n = n / 10;
        }
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}