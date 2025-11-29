#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, readEmp;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) return 1;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) return 1;

    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nDisplaying employee data read from file:\n");
    printf("ID: %d\n", readEmp.id);
    printf("Name: %s\n", readEmp.name);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}