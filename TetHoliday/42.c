#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int oddArr[MAX_SIZE], evenArr[MAX_SIZE];
    int oddCount = 0, evenCount = 0;
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("Odd elements: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    printf("\nEven elements: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}
