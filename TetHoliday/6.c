#include <stdio.h>

int main() {
    int num1, num2;
    int quotient, modulus;
 
    scanf("%d", &num1);
    scanf("%d", &num2);

    quotient = num1 / num2;
    modulus = num1 % num2;

    printf("Quotient: %d\n", quotient);
    printf("Modulus: %d\n", modulus);

    return 0;
}
