#include <stdio.h> 
#include <math.h>
// Question 01: Find the max Perfectly Squared Number

int findMaxSquaredNo(int a[], int n) {
    // Write your code here
    int maxPerfectSquare = -1;
    for (int i = 0; i < n; i++) {
        int sqrtVal = sqrt(a[i]);
        if (sqrtVal * sqrtVal == a[i] && a[i] > maxPerfectSquare) {
            maxPerfectSquare = a[i];
        }
    }
    return maxPerfectSquare;
    
    // End your code here
    // Not print in the function
}


int main() {
    // Do not change the code here 
    int a[100], n;
    printf("n = ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    ///////////////////////////////////

    printf("OUTPUT:\n");
    int maxVal = findMaxSquaredNo(a, n);
    printf("%d", maxVal);
    
    return 0;
}
