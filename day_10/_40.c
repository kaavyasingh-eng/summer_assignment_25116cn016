// Write a program to Print character pyramid.
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA

#include <stdio.h>

int main() {
    
int i,j,k,n;
char ch='A';

printf("enter the number :");
scanf("%d",&n);

for(i=0;i<=n;i++){
    for(j=0;j<n-i;j++){
        printf(" ");
    }
    for(k=0;k<(2*i-1)/2;k++){
        printf("%c",ch++);
    }

     for(k=0;k<(2*i)/2;k++){
        printf("%c",ch--);
     }


printf("\n");
ch='A';
}
    return 0;
}