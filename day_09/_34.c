// Write a program to Print reverse number 
// triangle. 
// 12345 
// 1234 
// 123 
// 12 
// 1 

#include <stdio.h>

int main() {
    
    int i,j,n;
    int num;

    printf("enter the number :");
    scanf("%d",&n);
    
    printf("\n");
    for(i=0;i<n;i++){
        num=1;
        for(j=0;j<n-i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}