#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }

    }
}

void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS];
    int mat2[ROWS][COLS];
    int result[ROWS][COLS];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }

    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
        
    }

    addMatrices(mat1, mat2, result);

    printf("Matrix 1:\n");
    displayMatrix(mat1);

    printf("Matrix 2:\n");
    displayMatrix(mat2);

    printf("Sum of matrices:\n");
    displayMatrix(result);

    return 0;
}
