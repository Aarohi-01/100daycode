#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH = 10,
    CRITICAL
};

int main() {
    printf("Enum Value of LOW: %d\n", LOW);
    printf("Enum Value of MEDIUM: %d\n", MEDIUM);
    printf("Enum Value of HIGH: %d\n", HIGH);
    printf("Enum Value of CRITICAL: %d\n", CRITICAL);

    return 0;
}