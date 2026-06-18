//WAP that finds the sum of diagonal elements of a mxn matrix.

#include<stdio.h>
int main(){
int a[10][10];
int r,c,i,j,sum=0;
printf("sum of matrix is called trace\n"); 

printf(" no of row in matrix : ");
scanf("%d",&r);

printf(" no of coloum in matrix: ");
scanf("%d",&c);

if(r!=c)
printf("digonal is only possible if no. of row and coloum are same");

else{
printf("enter the elementof matrix\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++) {
        printf("%d %d :",i+1,j+1 );
        scanf("%d",&a[i][j]);
    }}

//sum of digonal
for(i=0;i<r;i++){
    for(j=0;j<c;j++) {

        if(i==j)
        sum+=a[i][j];
    }}
    printf("sum of digonal is : %d",sum);
}
    return 0;
}