#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int digit1 = n / 100;
    int digit2 = (n / 10) % 10;
    int digit3 = n % 10;

    // Sort the digits in ascending order
    if (digit1 > digit2) {
        int temp = digit1;
        digit1 = digit2;
        digit2 = temp;
    }

    if (digit2 > digit3) {
        int temp = digit2;
        digit2 = digit3;
        digit3 = temp;
    }
    
    if (digit1 > digit2) {
        int temp = digit1;
        digit1 = digit2;
        digit2 = temp;
    }

    printf("Output: %d%d%d\n", digit1, digit2, digit3);

    return 0;
}
