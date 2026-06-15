// Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE

#include <stdio.h>

int main() {
    
int i,j,n;
char ch;

printf("enter the number :");
scanf("%d",&n);
printf("\n");

for(i=0;i<=n;i++){
    ch='A';
    for(j=0;j<i;j++){

        printf("%c",ch);
        ch++;
    }
    printf("\n");
}
 return 0;
}