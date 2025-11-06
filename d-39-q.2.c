#include <stdio.h>

int main() {
    int size;
    int i, j;
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the elements of the matrix (%d x %d):\n", size, size);

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0;
}