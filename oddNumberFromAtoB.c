#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swap a and b if a is greater than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Calculate the sum of odd numbers between a and b
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("The total sum of odd numbers between %d and %d is %d\n", a, b, sum);

    return 0;
}