#include <stdio.h>

// Helper recursive function to reverse the number
int reverse_recursive(int num, int reversed_accum) {
    // Base case: when the remaining number becomes 0
    if (num == 0) {
        return reversed_accum;
    }
    
    // Process the last digit and pass the updated accumulator to the next call
    int last_digit = num % 10;
    return reverse_recursive(num / 10, reversed_accum * 10 + last_digit);
}

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the recursive function starting with an accumulator of 0
    int result = reverse_recursive(number, 0);

    // Output the reversed number
    printf("Reversed number: %d\n", result);

    return 0;
}
