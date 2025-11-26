#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5] = {
        {"Alice", 101, 88.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 79.5},
        {"David", 104, 95.5},
        {"Eve", 105, 91.0}
    };

    int i;
    int max_index = 0;

    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("Student with highest marks:\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);

    return 0;
}