#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds, remainingSeconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;

    printf("\n%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}