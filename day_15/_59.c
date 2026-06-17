//Write a program to Rotate array right.

#include <stdio.h>

// Function to reverse a section of the array between start and end indices
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to right-rotate the array by K positions
void rotateRight(int arr[], int n, int k) {
    // Handle cases where K is greater than the array size
    k = k % n;
    if (k == 0) return;

    // 1. Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // 2. Reverse the first K elements
    reverse(arr, 0, k - 1);
    
    // 3. Reverse the remaining N - K elements
    reverse(arr, k, n - 1);
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate right

    printf("Original array: \n");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions: \n", k);
    printArray(arr, n);

    return 0;
}
