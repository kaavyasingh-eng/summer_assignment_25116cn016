#include <stdio.h>
#include <stdbool.h>

void removeDuplicates(char *str) {
    // A checklist for all 256 ASCII characters. 
    // false = haven't seen it yet, true = already processed it.
    bool seen[256] = {false};
    
    int readIndex = 0;  // Scans through the original string
    int writeIndex = 0; // Tracks where to write the unique characters

    // Walk through the string letter by letter
    while (str[readIndex] != '\0') {
        unsigned char currentChar = str[readIndex];

        // If we haven't seen this character yet, it's unique!
        if (seen[currentChar] == false) {
            seen[currentChar] = true;        // Mark it as seen
            str[writeIndex] = str[readIndex]; // Write it to our clean track
            writeIndex++;                     // Move the write pointer forward
        }
        
        // Always move the read pointer forward
        readIndex++;
    }

    // Crucial step: Null-terminate the shortened string to close it off
    str[writeIndex] = '\0';
}

int main() {
    char word1[] = "programming";
    char word2[] = "bananas";
    char word3[] = "abcdef";

    printf("Original: 'programming' -> Cleaned: ");
    removeDuplicates(word1);
    printf("'%s'\n", word1);

    printf("Original: 'bananas'     -> Cleaned: ");
    removeDuplicates(word2);
    printf("'%s'\n", word2);

    printf("Original: 'abcdef'      -> Cleaned: ");
    removeDuplicates(word3);
    printf("'%s'\n", word3);

    return 0;
}