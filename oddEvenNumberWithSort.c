#include <stdio.h>

void sortArrays(int arr[], int n) {
    int odd[n], even[n];
    int oddCount = 0, evenCount = 0;

    // Separate odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Sort odd numbers in descending order
    for (int i = 0; i < oddCount - 1; i++) {
        for (int j = i + 1; j < oddCount; j++) {
            if (odd[i] < odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    // Sort even numbers in ascending order
    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = i + 1; j < evenCount; j++) {
            if (even[i] > even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    // Print the sorted arrays
    printf("Odd numbers (sorted in descending order): ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers (sorted in ascending order): ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArrays(arr, n);

    return 0;
}