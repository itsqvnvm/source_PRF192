#include <stdio.h>
#include <math.h>

int main() {

    int n;
    float sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)i / (i + 1);
    }

    printf("%.2f", sum);

    return 0;
 
    
}