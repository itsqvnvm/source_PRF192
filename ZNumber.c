#include <stdio.h>

int isZNumber(int num) {
    int sum = 0;
    int product = 1;
    int digit;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    return sum == product;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isZNumber(n)) {
        printf("%d is a Z number.\n", n);
    } else {
        printf("%d is not a Z number.\n", n);
    }

    return 0;
}