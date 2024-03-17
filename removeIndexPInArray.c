#include <stdio.h>

int main() {
    int n, p;
    
    // Input n from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Input n elements
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input p value
    printf("Enter the index to remove: ");
    scanf("%d", &p);
    
    // Remove element at index p
    if (p >= 0 && p < n) {
        for (int i = p; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        
        // Print elements after removal
        printf("Elements after removal:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }
    
    return 0;
}