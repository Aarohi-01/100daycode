#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%g + %g = %g\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%g - %g = %g\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%g * %g = %g\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                result = num1 / num2;
                printf("%g / %g = %g\n", num1, num2, result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Cannot perform modulo by zero.\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("%g %% %g = %g (using integer parts)\n", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}