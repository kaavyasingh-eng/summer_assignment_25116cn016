#include <stdio.h>
#include <string.h>

void compressString(const char *str, char *result) {
    int len = strlen(str);
    
    // An empty string compresses to an empty string
    if (len == 0) {
        result[0] = '\0';
        return;
    }

    int writeIndex = 0; // Where we write into our result buffer
    int i = 0;

    while (i < len) {
        char currentChar = str[i];
        int count = 0;

        // Count how many times this character repeats consecutively
        while (i < len && str[i] == currentChar) {
            count++;
            i++;
        }

        // Write the character to the result
        result[writeIndex++] = currentChar;

        // Convert the count to a string and append it to result
        // (Using sprintf handles counts higher than 9, like 'a12')
        writeIndex += sprintf(&result[writeIndex], "%d", count);
    }

    // Don't forget to null-terminate the compressed string!
    result[writeIndex] = '\0';

    // If the compressed string isn't actually shorter, revert to the original
    if (strlen(result) >= len) {
        strcpy(result, str);
    }
}

int main() {
    char input1[] = "aabcccccaaa";
    char input2[] = "abcd"; // Compression would make this "a1b1c1d1" (longer)
    
    // Allocate buffers large enough to hold the output safely
    char output1[2 * sizeof(input1)] = {0};
    char output2[2 * sizeof(input2)] = {0};

    compressString(input1, output1);
    compressString(input2, output2);

    printf("Original: '%s' -> Compressed: '%s'\n", input1, output1);
    printf("Original: '%s' -> Compressed: '%s'\n", input2, output2);

    return 0;
}