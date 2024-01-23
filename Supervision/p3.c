#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in append mode
    file = fopen("sample.txt", "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit with an error code
    }

    // Append data to the file
    fprintf(file, "This data is appended to the file.\n");
    fprintf(file, "You can add more lines as needed.\n");

    // Close the file
    fclose(file);

    printf("Data appended to the file successfully!\n");

    return 0;
}