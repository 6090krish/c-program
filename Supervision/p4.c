#include <stdio.h>

int main() {
    // Declare file pointers for source and destination files
    FILE *sourceFile, *destinationFile;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");

    // Check if the source file opened successfully
    if (sourceFile == NULL) {
        printf("Error opening the source file!\n");
        return 1; // Exit with an error code
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");

    // Check if the destination file opened successfully
    if (destinationFile == NULL) {
        printf("Error opening the destination file!\n");
        fclose(sourceFile); // Close the source file before returning
        return 1; // Exit with an error code
    }

    // Copy contents from source to destination
    char character;
    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents copied from source to destination successfully!\n");

    return 0;
}