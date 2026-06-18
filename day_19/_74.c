#include <stdio.h>

int main() {
    int rows, cols;
    int first[10][10], second[10][10], difference[10][10];

    // Ask user for matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Perform element-wise subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = first[i][j] - second[i][j];
        }
    }

    // Display the resulting difference matrix
    printf("\nResultant Matrix (First - Second):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", difference[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
