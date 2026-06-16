//Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int sum(a,b){
    return (a+b);
}

int main() {
    
    int x,y;

    printf("enter the both number :");
    scanf("%d %d",&x,&y);
    printf("sum is :%d " ,sum(x,y));


    return 0;
}