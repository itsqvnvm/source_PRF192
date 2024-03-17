#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    int digit;
    digit = N % 10;
    sum += digit;
    N /= 10;
    digit = N % 10;
    sum += digit;

    printf("%d\n", sum);

    return 0;
}
