#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    // Input for Matrix 1 and 2, then sum them
    printf("Enter Matrix 1 elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Enter Matrix 2 elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) sum[i][j] = a[i][j] + b[i][j];
    printf("Sum Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
