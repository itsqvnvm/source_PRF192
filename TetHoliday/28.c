#include <stdio.h>

int main() {
    int dayNumber;

    printf("Enter a day number (2-8): ");
    scanf("%d", &dayNumber);

    switch (dayNumber) {
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        case 8:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
    }

    return 0;
}
