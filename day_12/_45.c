//Write a program to Write function for palindrome.

#include <stdio.h>

void palindrome(n){
int a;
int reversed=0;
int n1=n;
while(n>0){
    a=n%10;
    reversed=reversed*10+a;
    n=n/10;
}
n=n1;
if(n==reversed)
printf("haa jii, it's a palindrome");
else
printf("NO");
}

int main() {
    int n;
printf("enter the number :");
scanf("%d",&n);

palindrome(n);

    return 0;
}