//Write a program to Find row-wise sum.

#include <stdio.h>
int main(){

int r,c;
int i,j;
int arr[20][20];
int sum=0;

printf("enter the no. of rows and coloum in matrix :\n");
scanf("%d %d",&r,&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        printf("enter [%d][%d] :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        sum=sum+arr[i][j];
 }
 printf("sum of row %d is :%d\n",i+1,sum);
 sum=0;
}

    return 0;
}