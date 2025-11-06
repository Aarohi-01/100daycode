#include <stdio.h>

int main() {
    char sourceFile[100];
    char destFile[100];
    FILE *source_ptr, *dest_ptr;
    int ch;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%s", destFile);

    source_ptr = fopen(sourceFile, "r");
    if (source_ptr == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceFile);
        return 1;
    }

    dest_ptr = fopen(destFile, "w");
    if (dest_ptr == NULL) {
        printf("Error: Could not create destination file '%s'.\n", destFile);
        fclose(source_ptr);
        return 1;
    }

    while ((ch = fgetc(source_ptr)) != EOF) {
        fputc(ch, dest_ptr);
    }

    fclose(source_ptr);
    fclose(dest_ptr);

    printf("File copied successfully from '%s' to '%s'.\n", sourceFile, destFile);

    return 0;
}