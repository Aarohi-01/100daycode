#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns for first matrix: ");
    scanf("%d", &c1);

    printf("Enter rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns for second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        printf("Columns of the first matrix (%d) must equal rows of the second matrix (%d).\n", c1, r2);
        return 1; // Exit with an error
    }

    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2];

    printf("Enter elements of the first matrix (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize the result element to 0
            for (k = 0; k < c1; k++) { // c1 or r2 will work here
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("\nThe product of the two matrices is (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}