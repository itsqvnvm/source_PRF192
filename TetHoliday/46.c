#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int i, j;
    int max, min;
  
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }

    }
    
    max = matrix[0][0];
    min = matrix[0][0];

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLS; j++) {

            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }

        }
        
    }
   
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
