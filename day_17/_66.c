//Write a program to Union of arrays.

#include <stdio.h>
#include <stdbool.h>

// Function to check if an element is already present in an array
bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true; // Element found
        }
    }
    return false; // Element not found
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1}; // Contains duplicates internally
    int arr2[] = {3, 4, 5, 1, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // The maximum possible size of the union array is size1 + size2
    int unionArr[size1 + size2];
    int unionSize = 0;

    // 1. Process the first array: Add unique elements to unionArr
    for (int i = 0; i < size1; i++) {
        if (!isPresent(unionArr, unionSize, arr1[i])) {
            unionArr[unionSize] = arr1[i];
            unionSize++;
        }
    }

    // 2. Process the second array: Add elements if they aren't already in unionArr
    for (int i = 0; i < size2; i++) {
        if (!isPresent(unionArr, unionSize, arr2[i])) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }

    // Print the final Union array
    printf("Union of the two arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}