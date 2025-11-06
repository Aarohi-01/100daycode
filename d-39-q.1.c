#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int isDistinct = 1; // 1 for true (distinct), 0 for false

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

    // Determine the length of the main diagonal
    int diagLength = (rows < cols) ? rows : cols;

    // Check for distinct elements on the main diagonal
    // Compare each diagonal element with all subsequent diagonal elements
    for (i = 0; i < diagLength; i++) {
        for (j = i + 1; j < diagLength; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Found a duplicate
                break;
            }
        }
        if (isDistinct == 0) {
            break;
        }
    }

    // Print the matrix (optional, for verification)
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the result
    if (isDistinct == 1) {
        printf("\nThe elements on the main diagonal are distinct.\n");
    } else {
        printf("\nThe elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}