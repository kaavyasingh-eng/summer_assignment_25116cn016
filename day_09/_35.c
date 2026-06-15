// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE

#include <stdio.h>

int main() {
    
int i,j,n;
char ch='A';

printf("enter the number :");
scanf("%d",&n);
printf("\n");

for(i=0;i<n;i++){
    for(j=0;j<=i;j++){

        printf("%c",ch);
    }
    printf("\n");
    ch++;
}
 return 0;
}