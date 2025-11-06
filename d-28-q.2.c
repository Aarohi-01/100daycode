#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    
    scanf("%d", &n);

    
    if (n <= 0 || n > 100) {
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}