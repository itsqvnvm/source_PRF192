#include <stdio.h>

int main() {
    int num1, num2;
  
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int modulus = num1 % num2;
    
    printf("%d\n", sum);
    printf("%d\n", difference);
    printf("%d\n", product);
    printf("%d\n", quotient);
    printf("%d\n", modulus);
    
    return 0;
}
