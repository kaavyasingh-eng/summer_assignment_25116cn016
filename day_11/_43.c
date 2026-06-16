//Write a program to Write function to check prime.
#include <stdio.h>

void prime (n){

    int count=0;

    //if(n==0||1)
    if(n==0||n==1)
   { printf("not prime");
    return ;
   }

   for(int i=2;i<=n/2;i++)
   {if(n%i==0){
    printf("not prime");
    return ;
}
}
printf("prime");
}

int main() {
int n;
printf("enter the number :");
scanf("%d",&n);
    prime(n);
    return 0;
}