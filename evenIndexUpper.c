#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (i % 2 == 0) {
            s[i] = toupper(s[i]);
        }
    }

    printf("Modified string: %s", s);

    return 0;
}