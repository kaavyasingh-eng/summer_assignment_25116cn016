//Write a program to Find maximum occurring character.

#include <stdio.h>
#include <string.h>

char findMaxOccurringChar(const char *str) {
    // A frequency bucket for all 256 ASCII characters, initialized to 0
    int charCount[256] = {0};
    int i;

    // Step 1: Count the frequency of each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        charCount[(unsigned char)str[i]]++;
    }

    // Step 2: Find the character with the maximum count
    int maxCount = 0;
    char maxChar = '\0';

    for (i = 0; i < 256; i++) {
        // If we find a character with a higher count than our current max, update it
        // Note: Skipping spaces or null characters if you only want visible text
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char word1[] = "sample string";
    char word2[] = "testaaa";
    char word3[] = "success";

    printf("Max occurring char in '%s' is: '%c'\n", word1, findMaxOccurringChar(word1));
    printf("Max occurring char in '%s' is: '%c'\n", word2, findMaxOccurringChar(word2));
    printf("Max occurring char in '%s' is: '%c'\n", word3, findMaxOccurringChar(word3));

    return 0;
}