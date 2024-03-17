#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    int result = factorial(n);
    printf("%d! = %d\n", n, result);
    
    return 0;
}
