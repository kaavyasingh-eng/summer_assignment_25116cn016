//Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(const char *str1, const char *str2) {
    // If lengths are different, they absolutely cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // A frequency bucket for all 256 ASCII characters, initialized to 0
    int charCount[256] = {0};
    int i;

    // Count up for str1, and count down for str2 in a single loop
    for (i = 0; str1[i] != '\0'; i++) {
        charCount[(unsigned char)str1[i]]++;
        charCount[(unsigned char)str2[i]]--;
    }

    // If it's a true anagram, every single bucket must be perfectly back to 0
    for (i = 0; i < 256; i++) {
        if (charCount[i] != 0) {
            return false; // Found a mismatch!
        }
    }

    return true; 
}

int main() {
    char word1[] = "listen";
    char word2[] = "silent";
    char word3[] = "hello";
    char word4[] = "world";

    if (areAnagrams(word1, word2)) {
        printf("'%s' and '%s' are anagrams!\n", word1, word2);
    } else {
        printf("'%s' and '%s' are NOT anagrams.\n", word1, word2);
    }

    if (areAnagrams(word3, word4)) {
        printf("'%s' and '%s' are anagrams!\n", word3, word4);
    } else {
        printf("'%s' and '%s' are NOT anagrams.\n", word3, word4);
    }

    return 0;
}