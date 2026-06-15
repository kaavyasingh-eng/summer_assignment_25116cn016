#include <stdio.h>

void prime(int n){
    int i;
    if(n==0||n==1)
    return printf("number is not a prime");

    for(i=2;i<=n/2;i++){
       if(n%i==0){
         return printf("number is not a prime");
       }
    }
    printf("number is a prime");
}

int main() {
    int n;
    printf(" enter the number :");
    scanf("%d",&n);
    prime(n);
    return 0;
}