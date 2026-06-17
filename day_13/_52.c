//Write a program to Count even and odd elements.

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
 int flag;

 for(int i=0;i<n;i++)
{if(arr[i]%2==0)
flag++;}

printf("no. of even term is :%d\n",flag);
printf("no. of odd term is :%d",n-flag);

return 0;}
