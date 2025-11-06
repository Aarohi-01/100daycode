#include <stdio.h>

int main() {
    long long n;
    int binaryNum[64];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    if (n < 0) {
        printf("This program supports non-negative numbers.\n");
        return 1;
    }

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0
}