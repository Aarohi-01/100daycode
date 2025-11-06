#include <stdio.h>

int main() {
    double radius, area, circumference;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle: %g\n", area);
    printf("Circumference of the circle: %g\n", circumference);

    return 0;
}