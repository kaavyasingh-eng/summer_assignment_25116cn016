#include <stdio.h>

int main() {
    long long binary;
    int decimal_val = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;

    // Mathematical loop to process each bit from right to left
    while (temp > 0) {
        remainder = temp % 10;       // Extract rightmost digit
        decimal_val += remainder * base; // Add positional value
        temp = temp / 10;            // Discard processed digit
        base = base * 2;             // Shift tracking base by power of 2
    }

    printf("Decimal equivalent: %d\n", decimal_val);
    return 0;
}
