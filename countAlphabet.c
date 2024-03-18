#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

// void countAlphabets(const char str[], int count[]) {
//     int i = 0;
//     while (str[i]) {
//         if (isalpha(str[i])) {
//             int index = tolower(str[i]) - 'a';
//             count[index]++;
//         }
//         i++;
//     }
// }

void countAlphabets(const char *str, int *count) {
    while (*str != '\0') {
        if (isalpha(*str)) {
            int index = tolower(*str) - 'a';
            count[index]++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int count[ALPHABET_SIZE] = {0};
    int totalCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countAlphabets(str, count);

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        totalCount += count[i];
    }

    printf("Total Alphabet Count: %d\n", totalCount);

    return 0;
}