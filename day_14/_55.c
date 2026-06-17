//Write a program to Second largest element.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
    int first, second;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size < 2) {
        printf("Error: Array must contain at least 2 elements.\n");
        return 1;
    }

    // Input array elements from user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize both tracking variables to the lowest possible integer value
    first = second = INT_MIN;

    // Single-pass traversal to track values
    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            // The current first becomes the second largest
            second = first;
            // Current element becomes the new largest
            first = arr[i];
        } 
        // If element is smaller than 'first' but larger than 'second'
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    // Check if a valid second largest element was found
    if (second == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The largest element is: %d\n", first);
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
