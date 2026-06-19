//Write a program to Intersection of arrays

#include <stdio.h>
#include <stdbool.h>

// Function to check if an element is present in an array
bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 4, 1}; // Contains duplicates
    int arr2[] = {2, 4, 5, 2, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // The maximum possible size of the intersection is the size of the smaller array
    int minSize = (size1 < size2) ? size1 : size2;
    int intersectArr[minSize];
    int intersectSize = 0;

    // Loop through the first array
    for (int i = 0; i < size1; i++) {
        // 1. Check if the element exists in the second array
        // 2. Ensure it hasn't already been added to our result (handles duplicates)
        if (isPresent(arr2, size2, arr1[i]) && !isPresent(intersectArr, intersectSize, arr1[i])) {
            intersectArr[intersectSize] = arr1[i];
            intersectSize++;
        }
    }

    // Print the final Intersection array
    printf("Intersection of the two arrays: ");
    if (intersectSize == 0) {
        printf("No common elements.");
    } else {
        for (int i = 0; i < intersectSize; i++) {
            printf("%d ", intersectArr[i]);
        }
    }
    printf("\n");

    return 0;
}