#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf;
    long long lcm;

    printf("Enter first positive integer: ");
    scanf("%d", &num1);

    printf("Enter second positive integer: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    lcm = (long long)num1 * num2 / hcf;

    printf("LCM of %d and %d = %lld\n", num1, num2, lcm);

    return 0
}