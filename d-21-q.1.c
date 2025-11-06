#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN;
    int firstDigit, lastDigit, numDigits;
    long long powerOf10;
    int middlePart, swappedN;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    if (n < 0) {
        n = -n;
    }

    if (n < 10) {
        swappedN = n;
    } else {
        lastDigit = n % 10;
        
        numDigits = (int)log10(n);
        
        powerOf10 = (long long)pow(10, numDigits);
        
        firstDigit = n / powerOf10;
        
        middlePart = n % powerOf10;
        middlePart = middlePart / 10;
        
        swappedN = (lastDigit * powerOf10) + (middlePart * 10) + firstDigit;
    }

    if (originalN < 0) {
         printf("Swapped number: -%d\n", swappedN);
    } else {
         printf("Swapped number: %d\n", swappedN);
    }

    return 0;
}