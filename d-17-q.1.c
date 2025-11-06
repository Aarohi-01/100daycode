#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder, nDigits = 0;
    long long sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    if (n == 0) {
        nDigits = 1;
    } else {
        int temp = n;
        while (temp != 0) {
            temp /= 10;
            ++nDigits;
        }
    }

    int temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += (long long)pow(remainder, nDigits);
        temp /= 10;
    }

    if (sum == originalN) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}