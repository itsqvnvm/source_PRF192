#include <stdio.h>

int main() {
    float length_cm, length_m, length_km;

    printf("Enter length in centimeters: ");
    scanf("%f", &length_cm);

    length_m = length_cm / 100;
    length_km = length_cm / 100000;

    printf("Length in meters: %.2f\n", length_m);
    printf("Length in kilometers: %.2f \n", length_km);

    return 0;
}
