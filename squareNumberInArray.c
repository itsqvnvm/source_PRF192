#include <stdio.h>
#include <math.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        int sqrtNum = sqrt(arr[i]);
        if (sqrtNum * sqrtNum == arr[i]) {
            count++;
        }
    }

    printf("Number of square numbers in the array: %d\n", count);

    return 0;
}