#include <stdio.h>


int main() {
    float radius, diameter, circumference, area;
    float PI = 3.14159;

    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("%.2f\n", diameter);
    printf("%.2f\n", circumference);
    printf("%.2f\n", area);

    return 0;
}
