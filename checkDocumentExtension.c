#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int isDocument(char *fileName) {
//     char *extensions[] = {"txt", "doc", "docx", "rtf"};
//     int numExtensions = sizeof(extensions) / sizeof(extensions[0]);

//     char *extension = strrchr(fileName, '.');
//     if (extension != NULL) {
//         extension++; // Move past the dot character

//         for (int i = 0; i < numExtensions; i++) {
//             if (strcasecmp(extension, extensions[i]) == 0) {
//                 return 1; // Document extension found
//             }
//         }
//     }

//     return 0; // Not a document extension
// }

// The code not working properly because of the upper case and lower case letters are not identified properly
int isDocument(char fileName[]) {
    char extensions[][5] = {"txt", "doc", "docx", "rtf"};
    int numExtensions = sizeof(extensions) / sizeof(extensions[0]);

    char extension[5];
    int extensionIndex = 0;
    int fileNameLength = strlen(fileName);

    // Extract the extension from the file name
    for (int i = fileNameLength - 1; i >= 0; i--) {
        if (fileName[i] == '.') {
            break;
        }
      
    }
    extension[extensionIndex] = '\0';

    // Reverse the extension
    int start = 0;
    int end = extensionIndex - 1;
    while (start < end) {
        char temp = extension[start];
        extension[start] = extension[end];
        extension[end] = temp;
        start++;
        end--;
    }

    // Check if the extension matches any document extensions
    for (int i = 0; i < numExtensions; i++) {
        if (strcmp(extension, extensions[i]) == 0) {
            return 1; // Document extension found
        }
    }

    return 0; // Not a document extension
}
int main() {
    char fileName[100];
    printf("Enter a file name: ");
    scanf("%s", fileName);

    if (isDocument(fileName)) {
        printf("The file is a document.\n");
    } else {
        printf("The file is not a document.\n");
    }

    return 0;
}