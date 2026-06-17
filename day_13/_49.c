//Write a program to Input and display array.

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

printf("the element of array are :\n");

for(int i=0;i<n;i++)
printf("%d\t",arr[i]);

    return 0;
}