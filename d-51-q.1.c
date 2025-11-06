#include <stdio.h>

int main() {
    int n, target;
    int i;
    int first = -1;
    int last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    
    if (first != -1) {
        for (i = n - 1; i >= first; i--) {
            if (nums[i] == target) {
                last = i;
                break;
            }
        }
    }

    printf("%d, %d\n", first, last);

    return 0;
}