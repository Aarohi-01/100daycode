#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    printf("Enter the elements of the matrix (%d rows, %d columns):\n", rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for the current row
        for (j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Print the matrix
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the array of row sums
    printf("\nThe array of row sums is:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i, rowSums[i]);
    }

    return 0;
}