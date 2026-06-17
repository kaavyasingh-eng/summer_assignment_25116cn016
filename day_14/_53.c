//Write a program to Linear search

#include<stdio.h>

int main() {
    
int arr[50];
int i,n;
int target;
int flag=-1;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

printf("enter the target :");
scanf("%d",&target);

for(int i=0;i<n;i++){
    if(target==arr[i])
    flag=i;
    break;
}

if(flag==-1)
printf("not founded");
else
printf("%d is founded at %d position",target,flag+1);

return 0;
}
