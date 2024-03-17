#include <stdio.h>

int countDivisors(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    int numDivisors = countDivisors(N);
    printf("Number of divisors of %d: %d\n", N, numDivisors);
    
    return 0;
}
