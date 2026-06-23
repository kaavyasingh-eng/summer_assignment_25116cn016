#include <stdio.h>
#include <string.h>

char findFirstNonRepeatingChar(const char *str) {
    // A basket to hold the count of each character. 
    // ASCII has 256 possible characters. We initialize all counts to 0.
    int charCount[256] = {0};
    int i;

    // Step 1: Walk through the string and count how many times each character appears.
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char characterValue = str[i];
        charCount[characterValue]++;
    }

    // Step 2: Walk through the string *again* in the exact same order.
    // The first character we find that has a count of exactly 1 is our winner.
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char characterValue = str[i];
        if (charCount[characterValue] == 1) {
            return str[i]; // Found it!
        }
    }

    // If we checked the whole string and found nothing unique, return a placeholder.
    return '_'; 
}

int main() {
    char word1[] = "leetcode";
    char word2[] = "loveleetcode";
    char word3[] = "aabb";

    printf("First unique char in '%s' is: %c\n", word1, findFirstNonRepeatingChar(word1));
    printf("First unique char in '%s' is: %c\n", word2, findFirstNonRepeatingChar(word2));
    printf("First unique char in '%s' is: %c\n", word3, findFirstNonRepeatingChar(word3));

    return 0;
}