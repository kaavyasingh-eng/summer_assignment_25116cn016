//check strong number
#include <stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
   { fact=fact*i;}

   //printf("%d",fact);
   return fact;
}
int main() {

    int n,a,n1;
    int strong=0;

     printf("enter the number :");
     scanf("%d",&n);
     n1=n;
     

     while(n>0){
        a=n%10;
        strong=strong +factorial(a);
        n/=10;
     }
     n=n1;
     if(strong==n)
     printf("YES, it's is a strong number");
     else
     printf("NO");

    return 0;
}