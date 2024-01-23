#include <stdio.h>

// Function to calculate the length of a string using pointers
int calculateStringLength(char *str) {
    int length = 0;

    // Iterate through the characters until the null character '\0' is encountered
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Call the function to calculate the length of the string using pointers
    int length = calculateStringLength(inputString);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}