#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char *sentence, char *longestWord) {
    int maxLen = 0;
    int currentLen = 0;
    int currentStart = 0;
    
    int longestStart = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        // If the character is a letter or number, it's part of the current word
        if (isalnum((unsigned char)sentence[i])) {
            if (currentLen == 0) {
                currentStart = i; // Mark where this word begins
            }
            currentLen++;
        } 
        // If it's a space or punctuation, the current word has ended
        else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                longestStart = currentStart;
            }
            currentLen = 0; // Reset counter for the next word
        }
        i++;
    }

    // A final check in case the longest word was at the very end of the sentence
    if (currentLen > maxLen) {
        maxLen = currentLen;
        longestStart = currentStart;
    }

    // Extract the longest word from the original sentence into our result buffer
    if (maxLen > 0) {
        strncpy(longestWord, &sentence[longestStart], maxLen);
        longestWord[maxLen] = '\0'; // Null-terminate the string safely
    } else {
        strcpy(longestWord, ""); // No words found
    }
}

int main() {
    char sentence[] = "Learning data structures and algorithms is extra-ordinary!";
    char result[100]; // Buffer to store our output

    findLongestWord(sentence, result);

    printf("The sentence is: \"%s\"\n", sentence);
    printf("The longest word is: \"%s\"\n", result);

    return 0;
}