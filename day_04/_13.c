#include <stdio.h>
int main() {

    int a,b,c;
    a=0;
    b=1;
printf("the Fibonacci series is :\n");
printf("0\t1\t");
    
    for(int i=0;i<=15;i++){

        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}