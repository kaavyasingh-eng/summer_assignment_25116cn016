//Write a program to Write function to find factorial.
#include <stdio.h>

// Function definition using a loop
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int num;
    printf("enter the number :");
scanf("%d",&num);
    printf("Factorial of %d is %llu\n", num, factorial_iterative(num));
    return 0;
}
