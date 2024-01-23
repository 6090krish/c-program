#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap numbers using pointers
    swapNumbers(&num1, &num2);

    // Display the swapped numbers
    printf("Swapped numbers: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}