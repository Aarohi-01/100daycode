#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int isSymmetric = 1; // 1 for true, 0 for false

    scanf("%d", &rows);
    scanf("%d", &cols);

    if (rows != cols) {
        isSymmetric = 0;
        
        int temp;
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                scanf("%d", &temp);
            }
        }
    } else {
        int matrix[rows][cols];

        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (i = 0; i < rows; i++) {
            for (j = i + 1; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (isSymmetric == 0) {
                break;
            }
        }
    }

    if (isSymmetric == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}