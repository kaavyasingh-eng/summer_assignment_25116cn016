//Write a program to Rotate array left.

#include <stdio.h>

int main() {
    
int arr[50];
int i,n;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}