#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void display_role_message(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Role: ADMIN. (Welcome! You have full access.)\n");
            break;
        case USER:
            printf("Role: USER.  (Welcome! You have standard access.)\n");
            break;
        case GUEST:
            printf("Role: GUEST. (Welcome! You have limited access.)\n");
            break;
        default:
            printf("Role: UNKNOWN. (Access level not defined.)\n");
            break;
    }
}

int main() {
    printf("User Role Permissions:\n");
    printf("------------------------\n");

    enum UserRole role1 = ADMIN;
    enum UserRole role2 = USER;
    enum UserRole role3 = GUEST;

    display_role_message(role1);
    display_role_message(role2);
    display_role_message(role3);

    return 0;
}