#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int perimeter = 2 * (a + b);

    printf("Perimeter of the rectangle: %d\n", perimeter);
}