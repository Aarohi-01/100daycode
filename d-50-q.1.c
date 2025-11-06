#include <stdio.h>
#include <string.h>

int main() {
    char inputDate[20];
    char outputDate[20];
    int day, year;

    printf("Enter a date in dd/04/yyyy format: ");
    fgets(inputDate, sizeof(inputDate), stdin);

    
    int itemsScanned = sscanf(inputDate, "%d/04/%d", &day, &year);

    
    if (itemsScanned == 2) {
        
        sprintf(outputDate, "%02d-Apr-%04d", day, year);
        printf("Converted date: %s\n", outputDate);
    } else {
        printf("Invalid input format. Please use dd/04/yyyy.\n");
    }

    return 0;
}