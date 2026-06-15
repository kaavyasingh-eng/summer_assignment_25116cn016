// Write a program to Print reverse star pattern. 
// ***** 
// **** 
// *** 
// ** 
// * 

#include <stdio.h>

int main() {
    
    int i,j,n;

    printf("enter the number :");
    scanf("%d",&n);
    
    printf("\n");
    for(i=0;i<n;i++){
       //  for(j=0;j<n-i;j++){
                             
        { for(j=n;j>i;j--)                  

            printf("*");
        }
        printf("\n");
    }
    return 0;
}