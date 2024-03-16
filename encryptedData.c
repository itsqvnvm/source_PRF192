#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryptData(char* data) {
    int len = strlen(data);
    for (int i = 0; i < len; i++) {
        switch (data[i]) {
            case '0':
                data[i] = 'p';
                break;
            case '1':
                data[i] = 'r';
                break;
            case '2':
                data[i] = 'f';
                break;
            case '3':
                data[i] = '1';
                break;
            case '4':
                data[i] = '9';
                break;
            case '5':
                data[i] = '2';
                break;
            case '6':
                data[i] = 'e';
                break;
            case '7':
                data[i] = 'a';
                break;
            case '8':
                data[i] = 's';
                break;
            case '9':
                data[i] = 'y';
                break;
        }
    }
}

int main() {
    char data[100];
    printf("Enter data to encrypt: ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0'; // Remove trailing newline character

    encryptData(data);

    printf("Encrypted data: %s\n", data);

    return 0;
}