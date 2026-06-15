#include <stdio.h>
int main(){

int n,i,m;
printf("enter the number: ");
scanf("%d",&n);
printf("enter the number of term : ");
scanf("%d",&m);
printf("\n");
//print table
printf(" table of %d is : \n",n);
for(i=1;i<n;i++){

    printf("%d * %d = %d\n",n,i,n*i);
}

    return 0;
}