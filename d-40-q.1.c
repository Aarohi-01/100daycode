#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix (%d rows, %d columns):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal traversal (sum of indices i+j = k):\n");
    
    int numDiagonals = rows + cols - 1;

    for (k = 0; k < numDiagonals; k++) {
        
        int r = k;
        int c = 0;
        
        while (r >= 0) {
            if (r < rows && c < cols) {
                printf("%d ", matrix[r][c]);
            }
            r--;
            c++;
        }
        printf("\n");
    }

    return 0;
}