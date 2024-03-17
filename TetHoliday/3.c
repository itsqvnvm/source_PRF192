#include <stdio.h>

int main() {
    char firstname[50];
    char lastname[50];
    int yearOfBirth;

    printf("Input your firstname: ");
    scanf("%s", firstname);

    printf("Input your lastname: ");
    scanf("%s", lastname);

    printf("Input your year of birth: ");
    scanf("%d", &yearOfBirth);

    printf("%s %s %d\n", firstname, lastname, yearOfBirth);

    return 0;
    
}