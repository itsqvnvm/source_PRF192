#include <stdio.h>

int main() {
    int size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements %d\n", sum);

    return 0;
}
