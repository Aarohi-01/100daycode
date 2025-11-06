#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix (%d rows, %d columns):\n", rows, cols);

    // Read the matrix elements and calculate the sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add the element to the sum
        }
    }

    // Print the matrix (optional, but good for verification)
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}