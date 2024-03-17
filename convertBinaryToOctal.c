#include <stdio.h>

int binaryToOctal(int binary) {
    int octal = 0, decimal = 0, base = 1;

    // Convert binary to decimal
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }

    // Convert decimal to octal
    base = 1;
    while (decimal > 0) {
        int lastDigit = decimal % 8;
        octal += lastDigit * base;
        decimal /= 8;
        base *= 10;
    }

    return octal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int octal = binaryToOctal(binary);
    printf("Octal value: %d\n", octal);

    return 0;
}