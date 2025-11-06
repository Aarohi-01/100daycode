#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Infinite solutions (0 = 0)\n");
            } else {
                printf("No solution (%g = 0 is false)\n", c);
            }
        } else {
            printf("Linear equation. One root: %g\n", -c / b);
        }
        return 0;
    }