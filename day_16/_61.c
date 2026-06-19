//Write a program to Find missing number in array.

#include <stdio.h>

// Function to find the missing number using XOR
int findMissingXOR(int arr[], int size) {
    int xorAll = 0;
    int n = size + 1; // The range of numbers is 1 to n

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }

    // XOR all elements present in the array
    for (int i = 0; i < size; i++) {
        xorAll ^= arr[i];
    }

    // The remaining value is the missing number
    return xorAll;
}

int main() {
    // Example array of size 6 (numbers from 1 to 7, where 4 is missing)
    int arr[] = {1, 3, 7, 5, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingXOR(arr, size);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
