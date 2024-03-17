#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        sum += sign * i;
        sign *= -1;
    }

    printf("The sum S(%d) is: %d\n", n, sum);

    return 0;
}
