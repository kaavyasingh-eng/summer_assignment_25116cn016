//Write a program to Find pair with given sum.

#include<stdio.h>
int main(){

int arr[100],target,n,j;
int i=0;
printf("enter the no of array :");
scanf("%d",&n);
printf("enter the array :\n");
while(i<n){
scanf("%d",&arr[i]);
i++;}
printf("enter the target :");
scanf("%d",&target);

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(target==arr[i]+arr[j])
        {printf("term are %d and %d \n",arr[i],arr[j]);}
    }
  }
    return 0;
}