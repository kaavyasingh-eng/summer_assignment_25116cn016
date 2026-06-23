#include <stdio.h>
#include <stdbool.h>

char findFirstRepeatingChar(const char *str) {
    // A checklist to keep track of characters we have already seen.
    // ASCII has 256 characters. false = haven't seen it, true = already seen it.
    bool seen[256] = {false};
    int i;

    // Walk through the string letter by letter
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char characterValue = str[i];

        // If this character's box is already checked, it means we've seen it before.
        // Since we are moving left-to-right, this is our first duplicate!
        if (seen[characterValue] == true) {
            return str[i]; 
        }

        // If we haven't seen it, check its box so we remember it for later.
        seen[characterValue] = true;
    }

    // If we loop through the entire string and never hit a checked box, 
    // there are no repeating characters.
    return '_'; 
}

int main() {
    char word1[] = "leetcode";
    char word2[] = "loveleetcode";
    char word3[] = "abcd";

    printf("First repeating char in '%s' is: %c\n", word1, findFirstRepeatingChar(word1));
    printf("First repeating char in '%s' is: %c\n", word2, findFirstRepeatingChar(word2));
    printf("First repeating char in '%s' is: %c\n", word3, findFirstRepeatingChar(word3));

    return 0;
}