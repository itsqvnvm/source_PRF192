#include <stdio.h>

int isHappyNumber(int num) {
    int sum = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    
    if (sum == 1) {
        return 1;
    } else if (sum == 4) {
        return 0;
    } else {
        return isHappyNumber(sum);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isHappyNumber(number)) {
        printf("%d is a happy number.\n", number);
    } else {
        printf("%d is not a happy number.\n", number);
    }
    
    return 0;
}