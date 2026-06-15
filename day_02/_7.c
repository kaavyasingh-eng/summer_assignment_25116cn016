#include <stdio.h>

int main() {
    int n, rem, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        prod = 0;
    } else {
        while (n > 0) {
            rem = n % 10;
            prod *= rem;
            n /= 10;
        }
    }

    printf("Product of digits = %d\n", prod);
    return 0;
}
