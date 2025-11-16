#include <stdio.h>

enum Priority {
    LOW = 10,
    MEDIUM,
    HIGH
};

int main() {
    printf("Enum with explicit start value (10):\n");
    printf("------------------------------------\n");

    printf("LOW    = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH   = %d\n", HIGH);

    printf("\n");
    
    enum Priority my_priority = MEDIUM;
    printf("Current priority is: %d\n", my_priority);

    return 0;
}