#include <stdio.h>

int main() {
    char filename[100];
    FILE *file_ptr;
    char buffer[1000];

    printf("Enter the name of the file to check: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: The file '%s' does not exist or cannot be opened.\n", filename);
    } else {
        printf("File '%s' found. Displaying contents:\n", filename);
        printf("------------------------------------------\n");
        
        while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
            printf("%s", buffer);
        }
        
        printf("\n------------------------------------------\n");
        printf("End of file.\n");
        
        fclose(file_ptr);
    }

    return 0;
}