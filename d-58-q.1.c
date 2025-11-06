#include <stdio.h>

int main() {
    int n;
    int i;
    int leftProduct = 1;
    int rightProduct = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    for (i = 0; i < n; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }

    printf("The resulting array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}