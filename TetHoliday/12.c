#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int totalSeconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
