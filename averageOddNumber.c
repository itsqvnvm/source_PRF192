#include <stdio.h>

int main() {
    int n, num, sum = 0, count = 0;
    float average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 != 0) {
            sum += num;
            count++;
        }
    }

    if (count != 0) {
        average = (float) sum / count;
        printf("Average of odd numbers: %.3f\n", average);
    } else {
        printf("No odd numbers entered.\n");
    }

    return 0;
}