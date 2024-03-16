#include <stdio.h>
#include <string.h>

// int isDocument(const char* filename) {
//     const char* extensions[] = {".txt", ".doc", ".docx", ".rtf"};
//     int numExtensions = sizeof(extensions) / sizeof(extensions[0]);

//     const char* fileExtension = strrchr(filename, '.');
//     if (fileExtension != NULL) {
//         for (int i = 0; i < numExtensions; i++) {
//             if (strcmp(fileExtension, extensions[i]) == 0) {
//                 return 1; // File is a document
//             }
//         }
//     }

//     return 0; // File is not a document
// }

int isDocument(const char filename[]) {
    const char extensions[][5] = {".txt", ".doc", ".docx", ".rtf"};
    int numExtensions = sizeof(extensions) / sizeof(extensions[0]);

    char fileExtension[5];
    int filenameLength = strlen(filename);
    int extensionLength = 0;
    int dotIndex = -1;

    // Find the index of the last dot in the filename
    for (int i = filenameLength - 1; i >= 0; i--) {
        if (filename[i] == '.') {
            dotIndex = i;
            break;
        }
    }

    // If there is a dot in the filename, extract the extension
    if (dotIndex != -1) {
        extensionLength = filenameLength - dotIndex;
        strncpy(fileExtension, filename + dotIndex, extensionLength);
    }

    // Check if the extracted extension matches any of the valid extensions
    for (int i = 0; i < numExtensions; i++) {
        if (strncmp(fileExtension, extensions[i], extensionLength) == 0) {
            return 1; // File is a document
        }
    }

    return 0; // File is not a document
}

int main() {
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);

    if (isDocument(filename)) {
        printf("The file is a document.\n");
    } else {
        printf("Invalid file.\n");
    }

    return 0;
}