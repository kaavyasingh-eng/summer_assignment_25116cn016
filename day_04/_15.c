#include <stdio.h>
#include <math.h>

int main() {
    int n,n1;
    int flag=0;
    printf("enter the number : ");
    scanf("%d",&n);

    n1=n;

    //count no. of digit
    if(n==0)
    flag=1;
    while (n>0)
    {
    flag++;
    n=n/10;
    }
    
    int a, sum=0;
    n=n1; 

    // armstrong number

    while(n>0)
    {
        a = n % 10;
        sum = sum + round(pow(a, flag));
        n = n / 10;
    }
    
    n=n1;
    //compare the input
    
    if(n==sum)
    printf("yes,the number is armstrong number");
    else 
    printf("NO");

    return 0;
}