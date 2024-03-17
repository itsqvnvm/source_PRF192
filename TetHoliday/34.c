#include <stdio.h>

double calculateSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    double result = calculateSum(n);
    printf("S(%d) = %f\n", n, result);
    
    return 0;
}
