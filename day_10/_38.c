// Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     * 

#include <stdio.h>

int main() {
    
int i,j,k,n,l;

printf("enter the number :");
scanf("%d",&n);
printf("\n");


for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        printf(" ");
    }
    for(k=0;k<(n-i)*2-1;k++){
        printf("*");
    }
printf("\n");
}
    return 0;
}