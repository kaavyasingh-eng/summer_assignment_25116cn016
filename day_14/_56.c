//Write a program to Find duplicates in array.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    // Step 1: Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    // Array to keep track of elements we've already printed as duplicates
    int visited[n]; 
    int visited_count = 0;

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array are: \n");
    bool found_duplicate = false;

    // Step 3: Find duplicate elements using nested loops
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                
                // Check if this duplicate element was already reported
                bool already_printed = false;
                for (int k = 0; k < visited_count; k++) {
                    if (visited[k] == arr[i]) {
                        already_printed = true;
                        break;
                    }
                }

                // If not printed yet, print it and add to visited list
                if (!already_printed) {
                    printf("%d ", arr[i]);
                    visited[visited_count] = arr[i];
                    visited_count++;
                    found_duplicate = true;
                }
                break; // Break inner loop once a match is found
            }
        }
    }

    if (!found_duplicate) {
        printf("None (All elements are unique).");
    }
    printf("\n");

    return 0;
}
