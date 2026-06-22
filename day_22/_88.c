//Write a program to Remove spaces from string.

#include <stdio.h>

// Function to remove all spaces from a given string
void removeSpaces(char *str) {
    int i = 0; // Iterator to read characters
    int j = 0; // Pointer to track the position of non-space characters

    while (str[i] != '\0') {
        // If the current character is not a space, move it forward
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    // Note: Do not use a string literal directly (e.g., char *str = "...") 
    // because string literals are read-only and will cause a segmentation fault.
    char str[] = "H e l l o   W o r l d !";

    printf("Original string: '%s'\n", str);

    removeSpaces(str);

    printf("Modified string: '%s'\n", str);

    return 0;
}
