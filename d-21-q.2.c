#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n != 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}