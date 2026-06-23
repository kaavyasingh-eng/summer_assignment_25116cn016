#include <stdio.h>
#include <string.h>

void sortNamesAlphabetically(char names[][50], int n) {
    char temp[50];
    
    // Simple Bubble Sort based on dictionary/ASCII value comparison
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If the current name is alphabetically greater than the next name, swap them
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[5][50] = {"Rahul", "Amit", "Zack", "Binay", "Deepak"};
    int n = 5;

    sortNamesAlphabetically(names, n);

    printf("Names in Alphabetical Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}