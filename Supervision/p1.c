#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in write mode (creates the file if it doesn't exist)
    file = fopen("sample.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit with an error code
    }

    // Write data into the file
    fprintf(file, "Hello, this is some data written to the file.\n");
    fprintf(file, "You can add more lines as needed.\n");

    // Close the file
    fclose(file);

    printf("Data written to the file successfully!\n");

    return 0;
}