#include <stdio.h>

int main() {
    int arr[5];
    int count = 0, i;

    printf("Enter the elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
       if (arr[i] % 3 != 0 && arr[i] % 5 == 0) {
           count += 1;
       };
    }

    printf("%d \n", count);

    return 0;
}