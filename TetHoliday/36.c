#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);
    
    printf("Greatest Common Divisor: %d\n", greatestCommonDivisor);
    printf("Least Common Multiple: %d\n", leastCommonMultiple);
    
    return 0;
}
