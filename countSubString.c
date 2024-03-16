#include <stdio.h>
#include <string.h>

int countSubstring(const char *str, const char *sub) {
    int count = 0;
    int subLen = strlen(sub);

    while (*str) {
        if (strncmp(str, sub, subLen) == 0) {
            count++;
            str += subLen;
        } else {
            str++;
        }
    }

    return count;
}

int main() {
    const char *str = "Hello, hello, hello!";
    const char *sub = "hello";

    int occurrences = countSubstring(str, sub);
    printf("Occurrences: %d\n", occurrences);

    return 0;
}