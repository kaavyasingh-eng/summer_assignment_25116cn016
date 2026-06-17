//Write a program to Write function for Armstrong

#include <stdio.h>
#include <math.h>

void Armstrong(int n){

int a,final=0,n1,digits=0;
n1=n;
while(n>0){
    n=n/10;
    digits++;
}
n=n1;
while(n>0){
    a=n%10;
    final = final + (int)(pow(a,digits) + 0.5);
    n=n/10;
}
if(final==n1)
printf("Haaa yaar,armstrong number ha !");
else
printf("nahi bro !");
}

int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    Armstrong(n);

    return 0;
}