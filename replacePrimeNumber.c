#include <stdio.h>
#include <stdbool.h>

int isPrime(int num) {
    if (num <= 1) {
        return -1;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return -1;
        }
    }
    
    return 1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    int primeCount = 0;
    for (int i = 2; primeCount < size; i++) {
        if (isPrime(i) == 1 && i != arr[minIndex]) {
            arr[minIndex] = i;
            minIndex++;
            primeCount++;
        }
    }
    
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
