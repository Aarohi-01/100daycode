
#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length); 

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    area = length * breadth;

    perimeter = 2 * (length + breadth);

    printf("\nArea of the rectangle: %g\n", area);
    printf("Perimeter of the rectangle: %g\n", perimeter);

    return 0; 
}