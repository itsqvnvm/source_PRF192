#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays %= 365;

    weeks = totalDays / 7;
    totalDays %= 7;

    days = totalDays;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
