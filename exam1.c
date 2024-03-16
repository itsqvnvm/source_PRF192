#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check whether a number is a perfect number or not
int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

// Function to calculate the sum of odd elements in an array
int sumOfOddElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Function to generate a list of perfect numbers less than n
void generatePerfectNumbers(int n) {
    printf("Perfect numbers less than %d: ", n);
    for (int i = 1; i < n; i++) {
        if (isPerfectNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to count occurrences of a substring in another string
int countSubstringOccurrences(char str[], char substr[]) {
    int count = 0;
    int strLen = strlen(str);
    int substrLen = strlen(substr);
    for (int i = 0; i <= strLen - substrLen; i++) {
        int j;
        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substrLen) {
            count++;
        }
    }
    return count;
}

int main() {
    int choice;
    int num, size, n;
    int arr[100];
    char str[100], substr[100];

    do {
        printf("\n");
        printf("Menu:\n");
        printf("1. Check whether a number is a perfect number\n");
        printf("2. Calculate the sum of odd elements in an array\n");
        printf("3. Generate a list of perfect numbers less than n\n");
        printf("4. Count occurrences of a substring in another string\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPerfectNumber(num)) {
                    printf("%d is a perfect number.\n", num);
                } else {
                    printf("%d is not a perfect number.\n", num);
                }
                break;
            case 2:
                printf("Enter the size of the array: ");
                scanf("%d", &size);
                printf("Enter the elements of the array: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Sum of odd elements: %d\n", sumOfOddElements(arr, size));
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                generatePerfectNumbers(n);
                break;
            case 4:
                printf("Enter a string: ");
                scanf("%s", str);
                printf("Enter a substring: ");
                scanf("%s", substr);
                printf("Number of occurrences: %d\n", countSubstringOccurrences(str, substr));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}