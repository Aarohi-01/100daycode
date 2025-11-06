#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product;

    printf("Enter first number: ");
    scanf("%lf", &num1); 

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum:        %g + %g = %g\n", num1, num2, sum);
    printf("Difference: %g - %g = %g\n", num1, num2, difference);
    printf("Product:    %g * %g = %g\n", num1, num2, product);

    if (num2 == 0) {
        printf("Quotient:   Cannot divide by zero.\n");
    } else {
        double quotient = num1 / num2;
        printf("Quotient:   %g / %g = %g\n", num1, num2, quotient);
    }

    return 0; 
}