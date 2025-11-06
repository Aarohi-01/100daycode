#include <stdio.h>

int main() {
    int m, n;
    int i, j, k;

    printf("Enter the size of the first sorted array (m): ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter the size of the second sorted array (n): ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    
    i = 0; 
    j = 0; 
    k = 0; 

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}