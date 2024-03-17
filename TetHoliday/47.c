#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }

    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {

        int rowSum = 0;

        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        printf("Row %d: %d\n", i + 1, rowSum);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {

        int colSum = 0;

        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        
        printf("Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}
