#include <stdio.h>
int main() {

    int a,b,c,n;
    a=0;
    b=1;

    printf("enter the term :");
    scanf("%d",&n);

    if(n==1)
    {printf("0");
    return 0;}
    if(n==2)
    {printf("1");
    return 0;}
    
    for(int i=3;i<=n;i++){

        c=a+b;
        a=b;
        b=c;
        if(i==n)
            printf("%d",c);

    }

    return 0;
}