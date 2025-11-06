#include <stdio.h>
#include <limits.h>

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

    printf("Maximum elements in each window of size %d:\n", k);

    
    for (i = 0; i <= n - k; i++) {
        int maxInWindow = arr[i];

        
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > maxInWindow) {
                maxInWindow = arr[j];
            }
        }
        
        printf("%d ", maxInWindow);
    }
    printf("\n");

    return 0;
}