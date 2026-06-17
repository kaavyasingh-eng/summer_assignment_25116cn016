//Write a program to Write function for Fibonacci.

#include <stdio.h>

void fab(int n){
    int a=0;
    int b=1;
    int c;

    for(int i=0;i<n;i++)
   { printf("%d  ",a);
    c=a+b;
    a=b;
    b=c;}

}

int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    fab(n);
    return 0;
}