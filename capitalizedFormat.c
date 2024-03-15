#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char *str) {
    int capitalizeNext = 1;
    
    while (*str) {
        if (isspace(*str)) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            *str = toupper(*str);
            capitalizeNext = 0;
        } else {
            *str = tolower(*str);
        }
        
        str++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    capitalizeWords(str);
    
    printf("Capitalized string: %s\n", str);
    
    return 0;
}
