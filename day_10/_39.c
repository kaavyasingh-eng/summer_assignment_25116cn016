// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321

#include <stdio.h>

int main() {
    
int i,j,k,n;
int num;

printf("enter the number :");
scanf("%d",&n);

for(i=0;i<=n;i++){
    for(j=0;j<n-i;j++){
        printf(" ");
    }
    for(k=0;k<(2*i-1)/2;k++){
        printf("%d",num++);
    }

     for(k=0;k<(2*i)/2;k++){
        printf("%d",num--);
     }


printf("\n");
num=1;
}
    return 0;
}