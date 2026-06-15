#include <stdio.h>

// Function to calculate x^n without math.h pow()
double calculate_power(double x, int n) {
    double result = 1.0;
    long long exp = n; // Use long long to handle absolute value overflow of INT_MIN

    // If exponent is negative, invert the base and make exponent positive
    if (exp < 0) {
        x = 1.0 / x;
        exp = -exp;
    }

    // Binary exponentiation loop O(log n)
    while (exp > 0) {
        // If the current bit of exponent is odd, multiply result by x
        if (exp % 2 == 1) {
            result *= x;
        }
        x *= x;        // Square the base
        exp /= 2;      // Divide exponent by 2
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Get user input
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    // Calculate result
    double res = calculate_power(base, exponent);

    // Print result (handles floating points elegantly)
    printf("%.4f raised to the power of %d is: %.6f\n", base, exponent, res);

    return 0;
}
