#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char binary[9];
    printf("Enter a binary string of length 8: ");
    scanf("%8s", binary);

    // Check if the entered string is valid
    if (strlen(binary) != 8) {
        printf("Invalid binary string. Please enter a binary string of length 8.\n");
        return 1;
    }

    // Convert the binary string to an integer
    int decimal = strtol(binary, NULL, 2);

    // Calculate the two's complement value
    int twosComplement = decimal;
    if (binary[0] == '1') {
        twosComplement = decimal - 256;
    }

    printf("Two's complement value: %d\n", twosComplement);

    return 0;
}