#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    printf("\nChoose a string library function to perform:\n");
    printf("1. Length of strings\n");
    printf("2. Concatenate strings\n");
    printf("3. Compare strings\n");
    printf("4. Copy strings\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of str1: %lu\n", strlen(str1));
            printf("Length of str2: %lu\n", strlen(str2));
            break;
        case 2:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 3:
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        case 4:
            strcpy(str1, str2);
            printf("Copied string (str1): %s\n", str1);
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}