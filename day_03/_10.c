#include <stdio.h>

int prime(int n){
    int i;

    for(i=2;i<=n/2;i++){
       if(n % i == 0){
         return 0;
       }
    }
    return n;
}

int main() {

    int n,i;
    printf("Enter the number of term : ");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        if( prime(i)==i)
        printf("%d\t",i);
    }


    
    return 0;
}