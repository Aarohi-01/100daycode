#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate > 30) {
        printf("Membership Cancelled\n");
    } else if (daysLate > 10) {
        fine = (5 * 2) + (5 * 4) + (daysLate - 10) * 6;
        printf("Fine ₹%d\n", fine);
    } else if (daysLate > 5) {
        fine = (5 * 2) + (daysLate - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (daysLate > 0) {
        fine = daysLate * 2;
        printf("Fine ₹%d\n", fine);
    } else {
        printf("No fine.\n");
    }

    return 0;
}