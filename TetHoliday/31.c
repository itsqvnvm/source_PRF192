#include <stdio.h>

int calculateP(int n) {
    int result = 1;
    for (int i = 0; i <= n; i++) {
        result *= (2 * i + 1);
    }
    return result;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int p = calculateP(n);
    printf("P(%d) = %d\n", n, p);

    return 0;
}
