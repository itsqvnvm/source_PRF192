#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Remove first and last digit
    int temp = number;
    int sum = 0;
    int count = 0;

    while (temp > 0) {
        if (count != 0 && temp / 10 != 0) {
            sum += temp % 10;
        }
        temp /= 10;
        count++;
    }

    // Calculate sum of remaining digits
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits after removing first and last digit: %d\n", sum);

    return 0;
}