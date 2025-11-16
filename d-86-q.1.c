#include <stdio.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

void perform_operation(enum MenuChoice choice, int a, int b) {
    int result;

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Operation: ADD\n");
            printf("%d + %d = %d\n", a, b, result);
            break;
        
        case SUBTRACT:
            result = a - b;
            printf("Operation: SUBTRACT\n");
            printf("%d - %d = %d\n", a, b, result);
            break;
        
        case MULTIPLY:
            result = a * b;
            printf("Operation: MULTIPLY\n");
            printf("%d * %d = %d\n", a, b, result);
            break;
            
        default:
            printf("Operation: INVALID\n");
            break;
    }
}

int main() {
    int num1 = 20;
    int num2 = 10;

    printf("--- Simulating Menu Operations ---\n");
    printf("Numbers are %d and %d\n", num1, num2);
    printf("----------------------------------\n\n");

    perform_operation(ADD, num1, num2);
    printf("\n");
    
    perform_operation(SUBTRACT, num1, num2);
    printf("\n");
    
    perform_operation(MULTIPLY, num1, num2);

    return 0;
}