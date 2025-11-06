#include <stdio.h>

int main() {
    int n, target;
    int i, j;
    int index1 = -1;
    int index2 = -1;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements (positive integers):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }

    printf("%d %d\n", index1, index2);

    return 0;
}