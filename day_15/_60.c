#include <stdio.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int size) {
    int nonZeroCount = 0;

    // Step 1: Shift all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroCount] = arr[i];
            nonZeroCount++;
        }
    }

    // Step 2: Fill the remaining indices with zeroes
    while (nonZeroCount < size) {
        arr[nonZeroCount] = 0;
        nonZeroCount++;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 0, 3, 0, 5, 0, 7, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, size);

    moveZeroesToEnd(arr, size);

    printf("Modified Array: ");
    printArray(arr, size);

    return 0;
}
