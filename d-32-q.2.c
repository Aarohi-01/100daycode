#include <stdio.h>

int main() {
    long long n;
    int digitCounts[10] = {0};
    int digit;
    
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        digitCounts[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        digitCounts[digit]++;
        n /= 10;
    }

    int maxCount = 0;
    int mostFrequentDigit = 0;
    int i;

    for (i = 0; i < 10; i++) {
        if (digitCounts[i] > maxCount) {
            maxCount = digitCounts[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}