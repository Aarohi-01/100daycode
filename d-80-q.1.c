#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    const char *filename = "students.txt";
    FILE *file_ptr;

    struct Student students_out[] = {
        {"Alice", 101, 88.5},
        {"Bob", 102, 76.0},
        {"Charlie", 103, 92.5}
    };
    int num_students_out = sizeof(students_out) / sizeof(students_out[0]);

    
    file_ptr = fopen(filename, "w");
    if (file_ptr == NULL) {
        perror(filename);
        return 1;
    }

    printf("Writing to %s...\n", filename);
    for (int i = 0; i < num_students_out; i++) {
        fprintf(file_ptr, "%s %d %.2f\n", 
                students_out[i].name, 
                students_out[i].roll_number, 
                students_out[i].marks);
    }
    fclose(file_ptr);
    printf("Write complete.\n\n");

    
    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        perror(filename);
        return 1;
    }

    printf("Reading from %s...\n", filename);
    printf("---------------------------\n");
    printf("%-10s %-5s %-5s\n", "Name", "Roll", "Marks");
    printf("---------------------------\n");

    char name_in[50];
    int roll_in;
    float marks_in;

    while (fscanf(file_ptr, "%s %d %f", name_in, &roll_in, &marks_in) == 3) {
        printf("%-10s %-5d %-5.2f\n", name_in, roll_in, marks_in);
    }

    fclose(file_ptr);

    return 0;
}