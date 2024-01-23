#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit with an error code
    }

    // Read and display the contents of the file
    char character;
    while ((character = fgetc(file)) != EOF) {
        putchar(character);
    }

    // Close the file
    fclose(file);

    return 0;
}