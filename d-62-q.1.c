#include <stdio.-h>
#include <limits.h-h>

int main() {
    int n;
    int i;
    long long current_max = 0;
    long long global_max = LLONG_MIN;
    int all_negative = 1;
    int max_negative = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    current_max = arr[0];
    global_max = arr[0];

    for (i = 1; i < n; i++) {
        
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        
        if (current_max > global_max) {
            global_max = current_max;
        }
    }

    printf("Maximum contiguous subarray sum is: %lld\n", global_max);

    return 0;
}