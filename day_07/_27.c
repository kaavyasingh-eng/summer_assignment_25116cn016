#include <stdio.h>

// Function declaration
int sumOfDigits(int num);

int main() {
    int number, result;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handling negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    // Calling the recursive function
    result = sumOfDigits(number);

    // Displaying the output
    printf("Sum of digits: %d\n", result);

    return 0;
}

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    // Base condition: if number becomes 0, return 0
    if (num == 0) {
        return 0;
    }
    
    // Recursive case: extract last digit + call function with remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}
