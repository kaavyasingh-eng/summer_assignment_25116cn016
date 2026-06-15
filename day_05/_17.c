//check perfect number
#include <stdio.h>

int main() {
     int n;
    int i=0;
    int arr[100];
    int count=0;
    int num;
    int sum=0;


    printf("enter the number :");
    scanf("%d",&n);

    if (n <= 0) {
        return 1;
    }
//printf("the factorials of the %d are :\n",n);
    for(num=1;num<=n;num++){
        if(n%num==0){
            if(i<50){
                arr[i++]=num;
                count++;
            }
        }
    }

    for(i=0;i<count;i++){

        sum=sum+arr[i];

    }

   //printf("%d",sum);

    if(n==sum-n)
   { printf("the number is strong number");}
   else
   printf("NO");

    return 0;
}