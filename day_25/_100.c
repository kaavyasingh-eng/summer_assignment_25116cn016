#include <stdio.h>
#include <string.h>

void sortWordsByLength(char words[][50], int n) {
    char temp[50];

    // Bubble Sort based on length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current word's length is greater than the next word's length
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    char words[5][50] = {"Elephant", "Cat", "Hippopotamus", "Dog", "Monkey"};
    int n = 5;

    sortWordsByLength(words, n);

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }
    return 0;
}