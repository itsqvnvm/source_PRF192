#include <stdio.h>

double calculatePowerOfE(double x, double epsilon) {
    double result = 1.0;
    double term = 1.0;
    int n = 1;

    while (term > epsilon) {
        term *= x / n;
        result += term;
        n++;
    }

    return result;
}

int main() {
    double x, epsilon;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of epsilon: ");
    scanf("%lf", &epsilon);

    double powerOfE = calculatePowerOfE(x, epsilon);
    printf("e^%.2lf = %.6lf\n", x, powerOfE);

    return 0;
}