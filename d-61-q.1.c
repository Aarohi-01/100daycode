#include <stdio.h>

int main() {
    int n, k;
    int i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the subarray size (k): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid subarray size k.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("First negative integer in each window of size %d:\n", k);

    
    for (i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        int found = 0;

        
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                found = 1;
                break; 
            }
        }
        
        printf("%d ", firstNegative);
    }
    printf("\n");

    return 0;
}