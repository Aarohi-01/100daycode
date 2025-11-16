#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    
    const char* day_names[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Enum Days of the Week:\n");
    printf("------------------------\n");

    
    for (int day = SUNDAY; day <= SATURDAY; day++) {
        
        printf("%-10s = %d\n", day_names[day], day);
    }

    return 0;
}