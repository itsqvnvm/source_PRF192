#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int findMaxPrime(int n) {
    int maxNum = pow(10, n) - 1;
    
    while (maxNum >= pow(10, n - 1)) {
        if (isPrime(maxNum)) {
            return maxNum;
        }
        maxNum--;
    }
    
    return -1; // No prime number found
}

int main() {
    int n;
    scanf("%d", &n);
    
    int maxPrime = findMaxPrime(n);
    
    if (maxPrime != -1) {
        printf("The maximum prime number with %d digits is: %d\n", n, maxPrime);
    } else {
        printf("No prime number found with %d digits.\n", n);
    }
    
    return 0;
}
