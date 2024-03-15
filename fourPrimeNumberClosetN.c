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
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int count = 0;
    int current = n - 1; // Start from the closest number less than n
    
    printf("Four prime numbers less than %d and starting from %d:\n", n, n);
    
    while (count < 4) {
        if (isPrime(current)) {
            printf("%d \n", current);
            count++;
        }
        current--;
    }
    
    return 0;
}