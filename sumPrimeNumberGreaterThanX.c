#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n, x, number, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        
        if (number > x && isPrime(number)) {
            sum += number;
        }
    }
    
    printf("Sum of prime numbers greater than %d: %d\n", x, sum);
    
    return 0;
}