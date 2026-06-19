//Write a program to Sort array in descending order.

#include <stdio.h>

int main() {
    int arr[100];
    int n,i,j;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
//bubble shorting

for(i =0;i<n-1;i++){
for(j=0;j<n-i-1;j++){

if(arr[j]<arr[j+1])
{
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}
}
}
//printing

for(j=0;j<n;j++){
printf("%d\t",arr[j]);
}
    return 0;
}