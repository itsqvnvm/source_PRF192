#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getEmailformat(char s[], char w[]){
    int n = strlen(s);
    int i, pos = -1;

    // tìm khoảng trắng đầu tiên từ phải qua trái
    // for (i = 0; i < n; i++) // đi từ trái qua phải
    for (i = n - 1; i >= 0; i--) // đi từ phải qua trái
        if (s[i] == ' ')
        {
            pos = i; 
            break;
        }

    int idw = 0;

    for (i = pos + 1; i < n; i++){
        w[idw] = s[i];
        idw = idw + 1;
    }
    
    if (pos != -1 && isalpha(s[0])) {
        w[idw] = s[0];
        idw = idw + 1;
    }

    for (i = 0; i < pos; i++)
        if (s[i] == ' '){
            w[idw] = s[i + 1];
            idw = idw + 1;
        }

    w[idw] = '\0';

}

int main() {
    char s[100];
    gets(s);
    char w[100];
    getEmailformat(s, w);
    printf("%s\n", w);
    return 0;
}