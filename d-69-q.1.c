#include <stdio.h>

int main() {
    int n;
    int i;
    long long expectedSum;
    long long actualSum = 0;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements for a repeat.\n");
        return 1;
    }

    
    printf("Enter %d elements (assuming 0 to %d, one repeated):\n", n, n - 2);
    
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        actualSum += num;
    }

    
    long long n_minus_2 = n - 2;
    expectedSum = (n_minus_2 * (n_minus_2 + 1)) / 2;

    
    long long repeatedNumber = actualSum - expectedSum;

    printf("The repeated element is: %lld\n", repeatedNumber);

    return 0;
}