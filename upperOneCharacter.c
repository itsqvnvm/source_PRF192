#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    char c;
    int found = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter a character to convert: ");
    scanf(" %c", &c);

    for (int i = 0; i < strlen(s); i++) {
        if (tolower(s[i]) == tolower(c)) {
            s[i] = toupper(s[i]);
            found = 1;
        }
    }

    if (found) {
        printf("Converted string: %s", s);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}