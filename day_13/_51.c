//Write a program to Find largest and smallest element.

#include <stdio.h>

int main() {
    
int arr[50];
int i,n;
int key;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

key = arr[0];
for(i=0;i<n;i++)
{if(key<arr[i])
key=arr[i];
}
printf("largest element is :%d\n",key);

key = arr[0];
for(i=0;i<n;i++)
{if(key>arr[i])
key=arr[i];
}
printf("smallest element is :%d",key);

return 0;
}