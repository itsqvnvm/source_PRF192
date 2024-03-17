#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("The maximum value is: %d\n", a);
    } else {
        printf("The maximum value is: %d\n", b);
    }
    
    return 0;
}
