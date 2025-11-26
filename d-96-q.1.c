#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i;
    int max_index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }

    return s[max_index];
}

int main() {
    struct Student students[3] = {
        {"John", 101, 72.5},
        {"Jane", 102, 98.0},
        {"Doe", 103, 85.0}
    };

    struct Student top = findTopStudent(students, 3);

    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}