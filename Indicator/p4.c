#include <stdio.h>

// Function to input array elements using pointers
void inputArray(int *arr, int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position arr[%d]: ", i);
        scanf("%d", arr + i);
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

    // Call the function to input array elements using pointers
    inputArray(arr, size);

    // Call the function to print array elements using pointers
    printArray(arr, size);

    return 0;
}