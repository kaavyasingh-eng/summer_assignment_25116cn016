//Write a program to Find sum and average of array.

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

//sum

int sum=0;
for(int i=0;i<n;i++)
sum = sum + arr[i];

printf("sum is %d\n",sum);

// avg

printf("average is %d",sum/n);

    return 0;
}