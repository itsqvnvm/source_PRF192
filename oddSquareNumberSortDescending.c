#include <stdio.h>

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int oddSquares[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddSquares[count] = arr[i] * arr[i];
            count++;
        }
    }


    sortDescending(oddSquares, count);

    printf("Odd numbers squared in descending order:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", oddSquares[i]);
    }
    printf("\n");

    return 0;
}