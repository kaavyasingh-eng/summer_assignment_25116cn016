//Write a program to Convert lowercase to uppercase.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    // Reads an entire line of input, including spaces
    fgets(str, sizeof(str), stdin); 

    // Loop through each character until the end of the string
    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 from ASCII value to convert to uppercase
            str[i] = str[i] - 32; 
        }
        i++;
    }

    printf("Uppercase text: %s", str);
    return 0;
}
