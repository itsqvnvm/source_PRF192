#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, i, j;
    int maxElement = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the maximum element on the main diagonal
    for (i = 0; i < n; i++) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }

    printf("The maximum element on the main diagonal is: %d\n", maxElement);

    return 0;
}