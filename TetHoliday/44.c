#include <stdio.h>

void sortArrayDescending(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n-1; i++) {

        for (j = i+1; j < n; j++) {

            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        
    }
}

int main() {
    int arr[100], n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sortArrayDescending(arr, n);
    
    printf("Array in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
