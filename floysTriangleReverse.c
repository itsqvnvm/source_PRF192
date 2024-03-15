#include <stdio.h>

int main() {
    int rows, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    num = rows * (rows + 1) / 2;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}