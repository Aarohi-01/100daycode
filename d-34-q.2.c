#include <stdio.h>

int main() {
    int n, pos;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  // Reduce size

    // Display updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}