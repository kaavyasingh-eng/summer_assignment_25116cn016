//Write a program to Count words in a sentence.

#include <stdio.h>
#include <ctype.h> // Required for isspace()

int count_words(const char *str) {
    int count = 0;
    int in_word = 0; // State flag: 0 means outside a word, 1 means inside a word

    while (*str) {
        // isspace checks for space ' ', tab '\t', newline '\n', etc.
        if (isspace((unsigned char)*str)) {
            in_word = 0; // We hit a space, so we are no longer in a word
        } 
        // If it's not a space and we weren't already tracking a word
        else if (in_word == 0) {
            in_word = 1; // Mark that we entered a new word
            count++;     // Increment word count
        }
        str++; // Move to the next character
    }

    return count;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    // fgets safely reads the entire line including spaces up to 999 characters
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        int words = count_words(sentence);
        printf("Total number of words: %d\n", words);
    }

    return 0;
}
