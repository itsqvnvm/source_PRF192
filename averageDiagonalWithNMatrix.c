#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
        count++;
    
    }

    double average = sum / count;
    printf("Average of numbers in diagonal: %.2f\n", average);

    return 0;
}