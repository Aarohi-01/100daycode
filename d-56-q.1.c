#include <stdio.h>

int main() {
    int n;
    int i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int nge[n]; 

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        nge[i] = -1; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; 
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}