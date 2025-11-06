#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No prime numbers up to %d\n", n);
    } else {
        printf("Prime numbers from 1 to %d are:\n", n);
        
        for (i = 2; i <= n; ++i) {
            isPrime = 1; 

            if (i <= 1) {
                isPrime = 0;
            } else {
                for (j = 2; j <= sqrt(i); ++j) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}