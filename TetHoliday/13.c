#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    printf("Total hours: %d\n", hours);
    printf("Total minutes: %d\n", remainingMinutes);

    return 0;
}
