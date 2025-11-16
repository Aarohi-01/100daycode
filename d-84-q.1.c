#include <stdio.h>

enum OperationStatus {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void print_status_message(enum OperationStatus status) {
    switch (status) {
        case SUCCESS:
            printf("Status: SUCCESS (Operation Succeeded.)\n");
            break;
        case FAILURE:
            printf("Status: FAILURE (Operation Failed.)\n");
            break;
        case TIMEOUT:
            printf("Status: TIMEOUT (Operation Timed Out.)\n");
            break;
        default:
            printf("Status: Unknown.\n");
            break;
    }
}

int main() {
    printf("Operation Status Codes:\n");
    printf("-------------------------\n");

    enum OperationStatus current_status;

    current_status = SUCCESS;
    print_status_message(current_status);

    current_status = FAILURE;
    print_status_message(current_status);

    current_status = TIMEOUT;
    print_status_message(current_status);

    return 0;
}