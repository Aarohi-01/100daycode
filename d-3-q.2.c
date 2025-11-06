#include <stdio.h>

int main() {
    double num1, num2, temp;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\nBefore swapping:\n");
    printf("First number = %g\n", num1);
    printf("Second number = %g\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("First number = %g\n", num1);
    printf("Second number = %g\n", num2);

    return 0;
}