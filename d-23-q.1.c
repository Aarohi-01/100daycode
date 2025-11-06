#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of terms must be at least 1.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}