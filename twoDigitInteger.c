#include <stdio.h>

void printTwoDigitIntegers(int N) {
    int foundSolution = 0;
    for (int i = 10; i < 100; i++) {
        int tensDigit = i / 10;
        int onesDigit = i % 10;
        if (tensDigit * onesDigit == N) {
            printf("%d\n", i); // Print each number on a new line
            foundSolution = 1;
        }
    }
    if (!foundSolution) {
        printf("No Solution\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Two-digit positive integers whose product of two digits is equal to %d:\n", N);
    printTwoDigitIntegers(N);
    return 0;
}