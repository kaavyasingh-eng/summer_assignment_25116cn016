//Write a program to Print number triangle. 
// 1 
// 12 
// 123 
// 1234 
// 12345 

#include <stdio.h>

int main() {
    
int i,j,n;
int num;

printf("enter the number :");
scanf("%d",&n);
printf("\n");

for(i=0;i<=n;i++){
    num=1;
    for(j=0;j<i;j++){

        printf("%d",num);
        num++;
    }
    printf("\n");
}
 return 0;
}