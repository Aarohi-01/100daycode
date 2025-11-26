#include <stdio.h>
#include <string.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    Gender gender;
} Person;

const char* getGenderString(Gender g) {
    switch (g) {
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}

int main() {
    Person p1;
    strcpy(p1.name, "Jamie");
    p1.gender = OTHER;

    printf("Name: %s\n", p1.name);
    printf("Gender: %s\n", getGenderString(p1.gender));

    return 0;
}