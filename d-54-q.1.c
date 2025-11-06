#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int totalSum;
    int pivot = -1;

    
    scanf("%d", &n);

    
    totalSum = (n * (n + 1)) / 2;

    
    double x_double = sqrt((double)totalSum);
    int x_int = (int)x_double;

    
    if (x_int * x_int == totalSum) {
        pivot = x_int;
    }

    printf("%d\n", pivot);

    return 0;
}