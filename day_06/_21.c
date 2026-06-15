#include<stdio.h>
#include<math.h>
int main(){

int n,b=0,c=0,d=0;
     printf("enter a binary number :");
     scanf("%d",&n);
    { while (n!=0)
             { 
               c=n%10;
               d=d+c*pow(2,b);
               b++;
               n=n/10;
             }
              printf("%d",d);
    }
 return 0;
}