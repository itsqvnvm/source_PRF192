#include <stdio.h>

int calculateSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += 2 * i + 1;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int result = calculateSum(n);
    printf("The sum S(%d) is: %d\n", n, result);
    
    return 0;
}
