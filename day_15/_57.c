//Write a program to Reverse array.

#include <stdio.h>

// Function to reverse the array in-place
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    // Swap elements from both ends until pointers meet
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers toward the center
        start++;
        end--;
    }
}

// Function to print the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Get array size from user
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    // Get array elements from user
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, size);

    // Call the reverse function
    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
