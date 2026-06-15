// Write a program to Print repeated-number 
// pattern. 
// 1 
// 22 
// 333 
// 4444 
// 55555

#include <stdio.h>

int main() {
    
int i,j,n;
int num=1;

printf("enter the number :");
scanf("%d",&n);
printf("\n");

for(i=0;i<n;i++){
    for(j=0;j<=i;j++){

        printf("%d",num);
    }
    printf("\n");
    num++;
}
 return 0;
}