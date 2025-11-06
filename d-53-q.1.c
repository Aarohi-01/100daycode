#include <stdio.h>

int main() {
    int n;
    int i;
    int totalSum = 0;
    int leftSum = 0;
    int pivotIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++) {
        
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break; 
        }

        
        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}