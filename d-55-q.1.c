#include <stdio.h>

int main() {
    int n;
    int i;
    int candidate = -1;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    
    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}