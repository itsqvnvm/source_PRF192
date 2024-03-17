#include <stdio.h>

int main() {
    float a, b, x;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("The equation is satisfied for all values of x.\n");
        } 
        else {
            printf("The equation has no solution.\n");
        }
    } 
    
    else {
        x = -b / a;
        printf("The solution to the equation is x = %.2f\n", x);
    }

    return 0;
}
