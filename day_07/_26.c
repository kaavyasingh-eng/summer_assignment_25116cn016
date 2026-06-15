#include <stdio.h>

// Recursive function to fetch the nth Fibonacci term
int recursiveFibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main() {
    int terms = 10;
    printf("Fibonacci sequence up to %d terms:\n", terms);
    
    for (int i = 0; i < terms; i++) {
        printf("%d ", recursiveFibonacci(i));
    }
    return 0;
}
