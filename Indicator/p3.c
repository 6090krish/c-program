#include <stdio.h>

// Function to reverse an array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;                   // Pointer to the beginning of the array
    int *end = arr + size - 1;          // Pointer to the end of the array

    // Swap elements using pointers until start and end pointers meet
    while (start < end) {
        // Swap elements at start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

// Function to print array elements using pointers
void printArray(int *arr, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the array size is valid
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Declare an array of size 'size'
    int arr[size];

    // Input elements for the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position arr[%d]: ", i);
        scanf("%d", arr + i);
    }

    // Call the function to reverse the array using pointers
    reverseArray(arr, size);

    // Call the function to print the reversed array
    printf("\nReversed ");
    printArray(arr, size);

    return 0;
}