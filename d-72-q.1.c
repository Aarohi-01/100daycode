#include <stdio.h>

int main() {
    char buffer[1000];
    FILE *file_ptr;

    file_ptr = fopen("info.txt", "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open the file info.txt.\n");
        printf("Please make sure the file exists and you have read permissions.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    printf("-----------------------\n");

    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    printf("-----------------------\n");
    printf("End of file.\n");

    fclose(file_ptr);

    return 0;
}