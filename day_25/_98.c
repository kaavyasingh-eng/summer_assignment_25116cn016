#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void findCommonCharacters(char strings[][100], int numStrings) {
    if (numStrings == 0) return;

    int minFreq[256] = {0};
    
    // Step 1: Initialize minFreq with the character counts of the first string
    for (int i = 0; strings[0][i] != '\0'; i++) {
        minFreq[(unsigned char)strings[0][i]]++;
    }

    // Step 2: Update minFreq using subsequent strings
    for (int i = 1; i < numStrings; i++) {
        int currentFreq[256] = {0};
        
        // Count frequencies in the current string
        for (int j = 0; strings[i][j] != '\0'; j++) {
            currentFreq[(unsigned char)strings[i][j]]++;
        }
        
        // Retain only the minimum common character counts
        for (int k = 0; k < 256; k++) {
            minFreq[k] = MIN(minFreq[k], currentFreq[k]);
        }
    }

    // Step 3: Print the common characters
    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        while (minFreq[i] > 0) {
            printf("%c ", i);
            minFreq[i]--;
        }
    }
    printf("\n");
}

int main() {
    char strings[3][100] = {"bella", "label", "roller"};
    findCommonCharacters(strings, 3); // Output should be: e l l
    return 0;
}