#include <stdio.h>

enum Months {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    const char* month_names[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };

    int days_in_month[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    printf("Days in each month (non-leap year):\n");
    printf("--------------------------------------\n");
    printf("%-11s | Days\n", "Month");
    printf("--------------------------------------\n");

    for (int month = JANUARY; month <= DECEMBER; month++) {
        
        printf("%-11s | %d", month_names[month], days_in_month[month]);

        if (month == FEBRUARY) {
            printf(" (or 29 in leap year)\n");
        } else {
            printf("\n");
        }
    }

    return 0;
}