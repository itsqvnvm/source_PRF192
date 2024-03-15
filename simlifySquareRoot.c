#include <stdio.h> 
#include <math.h>

// Question 03: Simplify the Square Root of a Positive Integer n

void simplify(int n, int *a, int *b) {
    // Write your code here
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % (i * i) == 0) {
            *a = i;
            *b = n / (i * i);
            break;
        }
    }
    if (i * i > n) {
        *a = 1;
        *b = n;
    }
    // End your code here
}

    
int main() {
    // Do not change the code here 
    int n;
    printf("n = ");
    scanf("%d", &n);
    ///////////////////////////////////

    printf("OUTPUT:\n");
    int a, b;
    simplify(n, &a, &b);
    printf("%d %d", a, b);
    
    return 0;
}