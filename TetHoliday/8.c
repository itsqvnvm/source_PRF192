#include <stdio.h>

int main() {
    float length, width, perimeter, area;

    scanf("%f", &length);
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    area = length * width;

    printf("%.2f\n", perimeter);
    printf("%.2f\n", area);

    return 0;
}
