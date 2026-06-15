// Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// *********

#include <stdio.h>

int main() {
    
int i,j,k,n,l;

printf("enter the number :");
scanf("%d",&n);
printf("\n");


for(i=0;i<=n;i++){
    for(j=0;j<n-i;j++){
        printf(" ");
    }
    for(k=0;k<2*i-1;k++){
        printf("*");
    }
printf("\n");
}
    return 0;
}