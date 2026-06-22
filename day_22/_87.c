//Write a program to Character frequency

#include <stdio.h>

int main() {
    char str[1000];
    // Array to store frequencies of all 256 possible ASCII characters
    int freq[256] = {0}; 
    
    printf("Enter a string: ");
    // Use fgets instead of gets for safety against buffer overflow
    fgets(str, sizeof(str), stdin); 

    // Increment frequencies by mapping character ASCII values to indices
    for (int i = 0; str[i] != '\0'; i++) {
        // Exclude the newline character that fgets automatically appends
        if (str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
    }

    // Print frequencies of characters that appeared at least once
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' occurs %d time(s)\n", i, freq[i]);
        }
    }

    return 0;
}
