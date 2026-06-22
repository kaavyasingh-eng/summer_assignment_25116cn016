//Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Mismatch found, not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Safe alternative to gets() to prevent buffer overflow
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Remove trailing newline character added by fgets
        str[strcspn(str, "\n")] = '\0';

        if (isPalindrome(str)) {
            printf("\"%s\" is a palindrome.\n", str);
        } else {
            printf("\"%s\" is not a palindrome.\n", str);
        }
    }

    return 0;
}
