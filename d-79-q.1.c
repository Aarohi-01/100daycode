#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    const char *filename = "numbers.txt";
    int number;
    long long sum = 0;
    int count = 0;
    double average;

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        perror(filename);
        return 1;
    }

    while (fscanf(file_ptr, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file_ptr);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were found in %s.\n", filename);
    }

    return 0;
}