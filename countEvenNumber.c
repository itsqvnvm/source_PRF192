#include <stdio.h>

int main() {
    int count = 0;
    int num;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            count++;
        }
    }

    printf("Count of even numbers: %d\n", count);

    return 0;
}