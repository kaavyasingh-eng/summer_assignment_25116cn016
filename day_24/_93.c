#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Step 1: If lengths are different, they can't be rotations of each other
    if (len1 != len2) {
        return false;
    }

    // Step 2: Create a temporary buffer that is double the size of str1 + 1 for '\0'
    // This will hold the concatenated string: str1 + str1
    char temp[2 * len1 + 1];
    
    // Copy str1 into temp, then append str1 to it again
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 3: Check if str2 is a substring of the double-str1 container
    // strstr() returns a pointer if found, or NULL if not found
    if (strstr(temp, str2) != NULL) {
        return true; 
    }

    return false;
}

int main() {
    char word1[] = "waterbottle";
    char word2[] = "erbottlewat";
    char word3[] = "bottlewater";
    char word4[] = "notarotation";

    printf("Is '%s' a rotation of '%s'? %s\n", word2, word1, isRotation(word1, word2) ? "Yes" : "No");
    printf("Is '%s' a rotation of '%s'? %s\n", word3, word1, isRotation(word1, word3) ? "Yes" : "No");
    printf("Is '%s' a rotation of '%s'? %s\n", word4, word1, isRotation(word1, word4) ? "Yes" : "No");

    return 0;
}