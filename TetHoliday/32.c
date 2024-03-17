#include <stdio.h>

double calculateSum(int n) {
    double sum = 0;
    double factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = calculateSum(n);
    printf("The sum S(%d) is: %.2f\n", n, result);

    return 0;
}
