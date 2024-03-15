#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_digits(int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}

void calculate_squares(int n) {
    int i = 1;

    while(1) {
        int square = i * i;

        if(count_digits(square) == n) {
            printf("%d\n", square);
        } 
        
        else 
            if(count_digits(square) > n) {
                break;
            }

        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    calculate_squares(n);
    return 0;
}