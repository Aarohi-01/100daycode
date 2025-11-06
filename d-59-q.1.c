#include <stdio.h>
#include <limits.h> 

int main() {
    int n, k;
    int i;
    long long currentSum = 0;
    long long maxSum = LLONG_MIN; 

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

    
    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    
    for (i = k; i < n; i++) {
        
        currentSum = currentSum - arr[i - k] + arr[i];
        
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of a subarray of size %d is: %lld\n", k, maxSum);

    return 0;
}