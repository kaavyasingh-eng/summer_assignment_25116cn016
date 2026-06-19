//Write a program to Remove duplicates from array.

#include <stdio.h>

int main() {
    int arr[100];
    int size;

    // Get the size of the array from the user
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    // Read elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to remove duplicate elements
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                // Shift all subsequent elements one position to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Reduce the size of the array
                size--;
                // Decrement j to check the shifted element at the current index
                j--; 
            }
        }
    }

    // Print the unique elements
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
