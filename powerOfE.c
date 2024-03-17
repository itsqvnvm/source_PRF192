#include <stdio.h>
#include <math.h>

double calculatePowerOfE(int x, double epsilon) {
    double result = 1.0;
    double term = 1.0;
    int i = 1;

    while (fabs(term) > epsilon) {
        term *= x / (double)i;
        result += term;
        i++;
    }

    return round(result * 1e6) / 1e6; // Round the result to 6 decimal places
}

int main() {
    double x, epsilon;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of epsilon: ");
    scanf("%lf", &epsilon);

    double powerOfE = calculatePowerOfE(x, epsilon);

    printf("e^%lf = %.6lf\n", x, powerOfE);

    return 0;
}