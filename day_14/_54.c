//Write a program to Frequency of an element.

#include <stdio.h>

int main() {
    
int arr[50];
int i,n;
int target;
int count =0;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

printf("enter the target :");
scanf("%d",&target);

for(int i=0;i<n;i++)
if(arr[i]==target)
count++;

printf("frequency of element is %d",count);

return 0;
}