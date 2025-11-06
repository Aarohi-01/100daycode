#include <stdio.h>

int main() {
    int n, x;
    int i;
    int ceilIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element (x): ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break; 
        }
    }

    printf("%d\n", ceilIndex);

    return 0;
}