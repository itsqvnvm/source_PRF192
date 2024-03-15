#include <stdio.h>

void printRectangle(char character, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", character);
        }
        printf("\n");
    }
}

int main() {
    char character;
    int size;

    printf("Enter the character: ");
    scanf("%c", &character);

    printf("Enter the size: ");
    scanf("%d", &size);

    printRectangle(character, size);

    return 0;
}