#include <stdio.h>

int main() {
    int n1, n2, n3;
    int arr1[100], arr2[100], mergedArray[200];
    int i, j;

    scanf("%d", &n1);
    if (n1 <= 0 || n1 > 100) return 1;
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    if (n2 <= 0 || n2 > 100) return 1;
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;

    for (i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }

    for (i = 0, j = n1; i < n2; i++, j++) {
        mergedArray[j] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}