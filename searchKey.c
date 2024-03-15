#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[MAX_SIZE][MAX_SIZE];
    printf("Enter %d strings separated by space:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    char searchKey[MAX_SIZE];
    printf("Enter the search key: ");
    scanf("%s", searchKey);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strstr(strings[i], searchKey) != NULL) {
            count++;
        }
    }

    printf("Number of strings that include the search key: %d\n", count);

    return 0;
}