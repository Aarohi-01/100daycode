#include <stdio.h>

int main() {
    int n;
    int i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int pge[n]; 

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        pge[i] = -1; 
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break; 
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}