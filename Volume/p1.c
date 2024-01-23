#include <stdio.h>

// Define a structure to represent distances in inch-feet
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add inches
    result.inches = d1.inches + d2.inches;

    // Convert excess inches to feet
    result.feet = result.inches / 12;
    result.inches = result.inches % 12;

    // Add feet
    result.feet += d1.feet + d2.feet;

    return result;
}

int main() {
    // Declare variables of type Distance
    struct Distance distance1, distance2, result;

    // Input the first distance from the user
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    // Input the second distance from the user
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);

    // Add the distances
    result = addDistances(distance1, distance2);

    // Display the result
    printf("\nSum of distances: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}