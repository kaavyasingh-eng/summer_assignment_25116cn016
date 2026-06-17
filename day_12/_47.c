//Write a program to Write function for perfect number.
#include <stdio.h>

void perfect (int n){
int i;
int sum=0;

    for(i=1;i<=n/2;i++)
    if(n%i==0){
        sum+=i;
    }
if(n==sum)
printf("yessss sirr ! you guess it correct");
else 
printf("NO");
}

int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);

     perfect (n);

    return 0;
}